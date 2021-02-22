#include <iostream>
#include <string>

using namespace std;

int getMorseCode(char c);

string getMorseOutput(string text)
{
    string output;
    int n;

    for (char c : text)
    {
        n = getMorseCode(c);
        while (n)
        {
            if(n > 0)
            {
                switch(n % 10)
                {
                    case 1:
                        output += '.';
                        break;
                    case 3:
                        output += "-";
                        break;
                    default:
                        output += " ";
                        break;
                }
            }
            else if(n == -1)
            {
                output += "   ";
            }
            else if(n == -2)
            {
                output += "       ";
            }

            n /= 10;
        }
        output += " ";
    }
    return output;
}

int getMorseCode(char c)
{
    switch (c)
    {
        // letters
    case 'a':
    case 'A':
        return 31;
    case 'b':
    case 'B':
        return 1113;
    case 'c':
    case 'C':
        return 1313;
    case 'd':
    case 'D':
        return 113;
    case 'e':
    case 'E':
        return 1;
    case 'f':
    case 'F':
        return 1311;
    case 'g':
    case 'G':
        return 133;
    case 'h':
    case 'H':
        return 1111;
    case 'i':
    case 'I':
        return 11;
    case 'j':
    case 'J':
        return 3331;
    case 'k':
    case 'K':
        return 313;
    case 'l':
    case 'L':
        return 1131;
    case 'm':
    case 'M':
        return 33;
    case 'n':
    case 'N':
        return 13;
    case 'o':
    case 'O':
        return 333;
    case 'p':
    case 'P':
        return 1331;
    case 'q':
    case 'Q':
        return 3133;
    case 'r':
    case 'R':
        return 131;
    case 's':
    case 'S':
        return 111;
    case 't':
    case 'T':
        return 3;
    case 'u':
    case 'U':
        return 311;
    case 'v':
    case 'V':
        return 3111;
    case 'w':
    case 'W':
        return 331;
    case 'x':
    case 'X':
        return 3113;
    case 'y':
    case 'Y':
        return 3313;
    case 'z':
    case 'Z':
        return 1133;

        // special characters
    case ' ':
        return -1;
    case '\n':
        return -2;

        // numbers
    case '0':
        return 33333;
    case '1':
        return 33331;
    case '2':
        return 33311;
    case '3':
        return 33111;
    case '4':
        return 31111;
    case '5':
        return 11111;
    case '6':
        return 11113;
    case '7':
        return 11133;
    case '8':
        return 11333;
    case '9':
        return 13333;

        // punctuation
    case '.':
        return 31313;
    case ',':
        return 331133;
    case '?':
        return 113311;
    case '\'':
        return 133331;
    case '!':
        return 331313;
    case '/':
        return 13113;
    case '(':
    case '{':
    case '[':
        return 13313;
    case ')':
    case '}':
    case ']':
        return 313313;
    case '&':
        return 11131;
    case ':':
        return 111333;
    case ';':
        return 131313;
    case '=':
        return 31113;
    case '+':
        return 13131;
    case '-':
        return 311113;
    case '_':
        return 313311;
    case '"':
        return 131131;
    case '$':
        return 3113111;
    case '@':
        return 131331;

    default:
        return 0;
    }
}