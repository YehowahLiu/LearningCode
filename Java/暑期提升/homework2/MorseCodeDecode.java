import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class MorseCodeDecode {
    public static void main(String[] args) throws FileNotFoundException {
        // 从文件获取输入
        String filename = "encode.txt";// 默认获取输入的文件名
        if (args.length != 0)
            filename = args[0];// 如果有文件名作为参数传入，则获取该文件作为输入
        Scanner in = new Scanner(new File(filename));
        String input = in.nextLine();
        in.close();

        StringBuffer c = new StringBuffer();// 正在处理的摩斯码的缓存
        StringBuffer output = new StringBuffer();// 输出结果的缓存
        int state = 0;// 记录空格出现次数用于确认单词的结束

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
        // 单个字符的摩斯码对应处理
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