public class UPC {
    public static void main(String[] args) {
        if (args[0].matches("\\d{11}")) {
            long input = Long.parseLong(args[0]);
            Long copy_of_input = input;
            int tmp = 0;
            for (int i = 0; copy_of_input > 0; i++) {
                if (i % 2 == 0) {
                    tmp += copy_of_input % 10 * 3;
                } else {
                    tmp += copy_of_input % 10;
                }
                copy_of_input /= 10;
                tmp %= 10;
            }
            tmp = 10 - tmp;
            System.out.print(10 * input + tmp);
        } else {
            System.out.print("Invalid input! Please type 11 numbers.");
        }
    }

}