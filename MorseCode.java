import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class MorseCode {

    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        System.out.print("Enter input string : ");
        String input = reader.readLine();
        System.out.print("Morse code : ");
        for(int i = 0;i<input.length(); i++){
            System.out.print(getMorseCode(input.charAt(i)) + " ");
        }

    }

    private static String getMorseCode(char ch) {
        switch (ch) {
            case 'A':
                return ".-";                
            case 'B':
                return "-...";           
            case 'C':
                return "-.-.";
            case 'D':
                return "-..";
            case 'E':
                return ".";
            case 'F':
                return "..-.";
            case 'G':
                return "--.";
            case 'H':
                return "....";
            case 'I':
                return "..";
            case 'J':
                return ".---";
            case 'K':
                return "-.-";
            case 'L':
                return ".-..";
            case 'M':
                return "--";
            case 'N':
                return "-.";
            case 'O':
                return "---";
            case 'P':
                return ".--.";
            case 'Q':
                return "--.-";
            case 'R':
                return ".-.";
            case 'S':
                return "...";
            case 'T':
                return "-";
            case 'U':
                return "..-";
            case 'V':
                return "...-";
            case 'W':
                return ".--";
            case 'X':
                return "-..-";
            case 'Y':
                return "-.--";
            case 'Z':
                return "--..";

            case '1':
                return ".----";
            case '2':
                return "..---";
            case '3':
                return "...--";
            case '4':
                return "....-";
            case '5':
                return ".....";
            case '6':
                return "-....";
            case '7':
                return "--...";
            case '8':
                return "---..";
            case '9':
                return "----.";
            case '0':
                return "-----";

            case ' ':
                return " ";
            default:
                return "Invalid character";
            
        }
    }
}
