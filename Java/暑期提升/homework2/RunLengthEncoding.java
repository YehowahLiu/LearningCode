import java.util.Scanner;

public class RunLengthEncoding {
    public static void main(String[] args) {
        // 获取输入，存入字符串s
        Scanner in = new Scanner(System.in);
        System.out.println("Please enter a string:");
        String s = in.next();
        in.close();

        // 初始化变量，cnt用于记录字母出现次数，buffer存储将要输出的结果
        char c = s.charAt(0);
        int cnt = 0;
        StringBuffer buffer = new StringBuffer();

        // 处理字符串
        buffer.append(c);
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == c) // 若当前字符与记录字符一致
                cnt++; // 出现次数+1
            else { // 若不一致
                buffer.append(cnt); // 将当前次数存入结果
                c = s.charAt(i); // 将当前字符记录并存入结果
                buffer.append(c);
                cnt = 1; // 计数器归为1
            }
        }
        buffer.append(cnt);

        // 结果输出
        System.out.println(buffer.toString());
    }
}