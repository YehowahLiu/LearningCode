public class RandomWalkers {
    public static void main(String[] args) {

        int trials = Integer.parseInt(args[1]);
        double sum = 0;
        while (trials-- != 0) {
            int x = 0, y = 0, step = Integer.parseInt(args[0]);
            double dice;

            // System.out.println("(" + x + "," + y + ")");
            while (step-- != 0) {
                dice = Math.random();
                if (dice < 0.25)
                    x++;
                else if (dice < 0.5)
                    x--;
                else if (dice < 0.75)
                    y++;
                else
                    y--;
                // System.out.println("(" + x + "," + y + ")");
            }
            sum += Math.sqrt(x * x + y * y);
        }
        System.out.printf("The average squared distance is %.2f", sum / Integer.parseInt(args[1]));

    }
}