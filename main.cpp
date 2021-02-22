#include <iostream>
#include <string>

#include "morse_code.cpp"
#include "file_handler.cpp"
#include "sound_player.cpp"

using namespace std;

int main()
{
    string input = readFile("input.txt");

    cout << "Input text:" << endl;
    cout << input << endl;

    string output = getMorseOutput(input);

    cout << "In Morse Code:" << endl;
    cout << output << endl;

    writeFile("output.txt", getMorseOutput(input));

    cout << "Playing transmission sound.... (close window for stopping it)";
    playMorseCode(output);
    
    while(1);

    return 0;
}