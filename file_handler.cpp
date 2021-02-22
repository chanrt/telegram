#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string readFile(string fileName)
{
    string text, line;
    fstream readFile(fileName);

    while (getline(readFile, line))
        text += line + "\n";
    
    readFile.close();
    return text;
}

void writeFile(string fileName, string text)
{
    ofstream writeFile(fileName);
    writeFile << text;
    writeFile.close();
}