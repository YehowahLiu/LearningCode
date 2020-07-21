import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class SwitchCaseHelp {
    public static void main(String[] args) throws FileNotFoundException {
        String a, b;
        Scanner in = new Scanner(System.in);
        PrintWriter pw = new PrintWriter(new File("switch.txt"));
        while (true) {
            a = in.next();
            if (a == "\0") {
                in.close();
                pw.close();
                break;
            }
            b = in.next();
            pw.printf("case \"\s\":\n\treturn \'\s\'", a, b);
        }
    }
}