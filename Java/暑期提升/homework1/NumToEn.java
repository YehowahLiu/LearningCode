public class NumToEn {

    private static final String[] basicNum = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight",
            "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen",
            "nineteen" };
    private static final String[] tensNum = { "", "", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy",
            "eighty", "ninety" };
    private static final String[] Units = { "", " thousand", " million" };

    public static void main(String[] args) {
        if (!args[0].matches("^(-)?\\d{1,9}$")) { // 正则判断输入是否合法
            System.out.println("Invalid input!");
            System.out.println("Please input number between -999999999 and 999999999.");
        } else {
            // System.out.print("Correct input.");
            StringBuffer buffer = new StringBuffer();
            int input = Integer.parseInt(args[0]);

            // 判断是否为负数，记录并转化为正数
            boolean negative = args[0].charAt(0) == '-';
            if (negative)
                input = 0 - input;

            if (input == 0) {// 0的特判
                System.out.print("zero");
            } else {
                // for循环三位分割数字，每三位进行处理.
                for (int i = 0; i < 3 && input != 0; i++) {
                    if (i != 0)
                        input /= 1000;
                    if (input % 1000 == 0)
                        continue;
                    buffer.insert(0, buffer.length() > 0 ? " " : "");
                    buffer.insert(0, analyse(input % 1000) + Units[i]);
                }

                // 输出，如为负数要同时输出negative
                if (negative)
                    buffer.insert(0, "negative ");
                System.out.print(buffer.toString());
            }
        }
    }

    // 三位及以下数字的处理函数
    private static String analyse(int x) {
        StringBuffer buffer = new StringBuffer();

        buffer.append(x > 100 ? basicNum[x / 100] + " hundred" : "");// 处理百位
        x -= x / 100 * 100;

        if (x == 0) {
            return buffer.toString(); // 如果百位处理完毕后x为零，直接返回结果
        } else if (x > 19) {
            buffer.append(buffer.length() > 0 ? " " : "");// 判断是否输出过百位，如有，空格隔开
            buffer.append(tensNum[x / 10]);
            x = x % 10;
            buffer.append(x > 0 ? " " + basicNum[x] : "");
        } else {
            // 使用两个三目，判断是否需要隔开百位，并判断分隔是否需要and
            buffer.append(buffer.length() > 0 ? x > 9 ? " " : " and " : "");
            buffer.append(basicNum[x]);
        }

        return buffer.toString();
    }
}