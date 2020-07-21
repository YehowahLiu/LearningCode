import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class MorseCodeDecode {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("encode.txt"));
        String input = in.next();
        in.close();
        StringBuffer c = new StringBuffer();
        StringBuffer output = new StringBuffer();
        int state = 0;
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) == ' ') {
                state++;
                switch (state) {
                    case 1:
                        output.append(MorseToChar(c.toString()));
                        c.setLength(0);
                        break;
                    case 3:
                        output.append(' ');
                }
            } else {
                state = 0;
                c.append(input.charAt(i));
            }
        }
        System.out.println(output.toString());
    }

    private static char MorseToChar(String s) {
        switch (s) {
            case ".-":
                return 'A';
            case "-...":
                return 'B';
            case "-.-.":
                return 'C';
            case "-..":
                return 'D';
            case ".":
                return 'E';
            case "..-.":
                return 'F';
            case "--.":
                return 'G';
            case "....":
                return 'H';
            case "..":
                return 'I';
            case ".---":
                return 'J';
            case "-.-":
                return 'K';
            case ".-..":
                return 'L';
            case "--":
                return 'M';
            case "-.":
                return 'N';
            case "---":
                return 'O';
            case ".--.":
                return 'P';
            case "--.-":
                return 'Q';
            case ".-.":
                return 'R';
            case "...":
                return 'S';
            case "-":
                return 'T';
            case "..-":
                return 'U';
            case "...-":
                return 'V';
            case ".--":
                return 'W';
            case "-..-":
                return 'X';
            case "-.--":
                return 'Y';
            case "--..":
                return 'Z';
            case ".----":
                return '1';
            case "..---":
                return '2';
            case "...--":
                return '3';
            case "....-":
                return '4';
            case ".....":
                return '5';
            case "-....":
                return '6';
            case "--...":
                return '7';
            case "---..":
                return '8';
            case "----.":
                return '9';
            case "-----":
                return '0';
        }
        return 0;
    }
}