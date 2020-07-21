public class UserThree {
    public static void main(String[] args) {
        int x = 3;
        while (x-- != 0) {
            System.out.print("Hi, ");
            System.out.print(args[x]);
            System.out.println(". How are you?");
        }
    }
}