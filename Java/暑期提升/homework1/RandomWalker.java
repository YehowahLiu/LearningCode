public class RandomWalker {
    public static void main(String[] args) {
        int x = 0, y = 0, step = Integer.parseInt(args[0]);
        double dice;

        System.out.println("(" + x + "," + y + ")");
        while (step-- > 0) {
            dice = Math.random();
            if (dice < 0.25)
                x++;
            else if (dice < 0.5)
                x--;
            else if (dice < 0.75)
                y++;
            else
                y--;
            System.out.println("(" + x + "," + y + ")");
        }
        System.out.print("Squared distance is " + Math.sqrt(x * x + y * y));
    }
}