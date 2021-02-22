#include <iostream>
#include <conio.h>
#include <string>

#include "morse_code.cpp"
#include "sound_player.cpp"

using namespace std;

int main()
{
    string output;
    char c;

    cout << "Type something..." << endl;
    while(1) 
    {
        c = getch();
        cout << getMorseOutput(string(1, c));
        playSound(getMorseCode(c));
    }

    return 0;
}