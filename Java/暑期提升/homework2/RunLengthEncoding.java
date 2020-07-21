import java.util.Scanner;

public class RunLengthEncoding {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Please enter a string:");
        String s = in.next();
        in.close();
        char c = s.charAt(0);
        int cnt = 0;
        StringBuffer buffer = new StringBuffer();
        buffer.append(c);
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c)
                cnt++;
            else {
                buffer.append(cnt);
                c = s.charAt(i);
                buffer.append(c);
                cnt = 1;
            }
        }
        buffer.append(cnt);
        System.out.println(buffer.toString());
    }
}