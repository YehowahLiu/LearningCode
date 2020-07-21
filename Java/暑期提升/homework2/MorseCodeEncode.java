import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class MorseCodeEncode {
    public static void main(String[] args) throws FileNotFoundException {
        final String[] NOcode = { "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..",
                "----." };
        final String[] Codes = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..",
                "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

        // 获取输入存入字符数组
        Scanner in = new Scanner(System.in);
        char[] input = in.nextLine().toCharArray();
        in.close();

        // 编码为MorseCode并存储
        StringBuffer buffer = new StringBuffer();
        for (char c : input) {
            if ('0' <= c && c <= '9') {
                buffer.append(NOcode[c - '0'] + ' ');
            } else if ('A' <= c && c <= 'Z') {
                buffer.append(Codes[c - 'A'] + ' ');
            } else if (c == ' ') {
                buffer.append("   ");
            }
        }

        // 将得到的编码存入文件
        PrintWriter pw = new PrintWriter(new File("output.txt"));
        pw.print(buffer.toString());
        pw.close();
    }
}