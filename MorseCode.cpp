// Student : Quazi Irfan
// Course : CSC-461 Programming Languages (Assignment 1)
// Instructor : Dr. Sung Shin
// Due Date : Jan 23rd, 2017
// File Name : MorseCode.cpp

// Program description :
// This program asks the user to input a string.
// Then in a loop each characters from that array is fed into getMorseCode function.
// The program then prints the corresponding Morse code returned by getMorseCode method.
// The program terminates after reaching at end of input.

// Sample I/O:
// Enter string : ABCDE FGHIJ
// Morse code : .- -... -.-. -.. .   ..-. --. .... .. .---

// Input restriction :
// Only capital letters, numbers and spaces are allowed.

#include<iostream>

using namespace std;

string getMorseCode(char ch);

// The entry point of the program.
int main(){
    // Ask for input string
    string input;
    cout << "Enter string : ";
    getline(cin, input);

    // feed characters into getMorseCode
    cout << "Morse code : ";
    for(unsigned int i = 0; i<input.size(); i++){
        cout << getMorseCode(input.at(i)) + " ";
    }

    // program termination
    return 1;
}

// getMorseCode take one character as an argument
// Returns the corresponding Morse code.
// If any invalid character is fed, it prints "Invalid character"
string getMorseCode(char ch){
    switch(ch){
        case 'A':
            return ".-";
            break;

        case 'B':
            return "-...";
            break;

        case 'C':
            return "-.-.";
            break;

        case 'D':
            return "-..";
            break;

        case 'E':
            return ".";
            break;

        case 'F':
            return "..-.";
            break;

        case 'G':
            return "--.";
            break;

        case 'H':
            return "....";
            break;

        case 'I':
            return "..";
            break;

        case 'J':
            return ".---";
            break;

        case 'K':
            return "-.-";
            break;

        case 'L':
            return ".-..";
            break;

        case 'M':
            return "--";
            break;

        case 'N':
            return "-.";
            break;

        case 'O':
            return "---";
            break;

        case 'P':
            return ".--.";
            break;

        case 'Q':
            return "--.-";
            break;

        case 'R':
            return ".-.";
            break;

        case 'S':
            return "...";
            break;

        case 'T':
            return "-";
            break;

        case 'U':
            return "..-";
            break;

        case 'V':
            return "...-";
            break;

        case 'W':
            return ".--";
            break;

        case 'X':
            return "-..-";
            break;

        case 'Y':
            return "-.--";
            break;

        case 'Z':
            return "--..";
            break;


        case '1':
            return ".----";
            break;

        case '2':
            return "..---";
            break;

        case '3':
            return "...--";
            break;

        case '4':
            return "....-";
            break;

        case '5':
            return ".....";
            break;

        case '6':
            return "-....";
            break;

        case '7':
            return "--...";
            break;

        case '8':
            return "---..";
            break;

        case '9':
            return "----.";
            break;

        case '0':
            return "-----";
            break;

        case ' ':
            return " ";
            break;

        default:
            return "Invalid character";
            break;
    }
}
