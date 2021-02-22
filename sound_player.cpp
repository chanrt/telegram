#include <windows.h>
#include <ctime>
#include <string>

#include "settings.cpp"

void timeDelay(int time)
{
    clock_t start = clock();

    while (clock() - start < time)
        ;
}

void playMorseCode(string text)
{
    for (char c : text)
    {
        switch (c)
        {
        case '.':
            Beep(freq, duration);
            timeDelay(duration);
            break;
        case '-':
            Beep(freq, 3 * duration);
            timeDelay(duration);
            break;
        case ' ':
            timeDelay(duration);
            break;
        }
    }
}

void playSound(int sound)
{
    if (sound == -1)
        timeDelay(3 * duration);
    else if (sound == -2)
        timeDelay(7 * duration);
    else
    {
        while (sound)
        {
            Beep(freq, (sound % 10) * duration);
            timeDelay(duration);
            sound /= 10;
        }
    }
}