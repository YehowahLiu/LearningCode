import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class MaxProductOfSubsequence {
    public static void main(String[] args) throws FileNotFoundException {
        // 从in.txt文档获取输入，并存入字符数组中
        Scanner in = new Scanner(new File("in.txt"));
        char[] input = in.next().toCharArray();
        in.close();

        // 变量初始化
        int n = Integer.parseInt(args[0]);// n为所求子序列长度，需作为调用函数的参数输入
        long res = 0;// 存储当前最大子序列乘积
        long tmp;// 存储计算过程中的乘积

        // 两层循环，外层确定序列起始位置，内层对选定位置计算子序列乘积
        for (int i = 0; i + n < input.length; i++) {
            tmp = 1;
            for (int j = 0; j < n; j++) {
                tmp *= input[i + j] - '0';
                if (tmp == 0)
                    break;
            }
            res = Math.max(tmp, res);
        }

        System.out.println(res);
    }
}