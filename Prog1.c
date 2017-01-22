#include<stdio.h>
#include<string.h>

char* getMorseCode(char ch);

int main(){
    char input[100];
    gets(input);

    int i;
    for(i = 0; i<(int)strlen(input); i++){
        printf("%s ", getMorseCode(input[i]));
    }

    return 1;
}

char* getMorseCode(char ch){
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
            return "Invalid character.";
            break;
    }
}
