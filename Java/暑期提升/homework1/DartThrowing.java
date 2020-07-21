public class DartThrowing {
    public static void main(String[] args) {
        int hits = 0;
        double x, y;
        for (int i = 0; i < 100000; i++) {
            x = Math.random() * 2 - 1;
            y = Math.random() * 2 - 1;
            if (x < 0 || (x > 0 && y > 0 && x + y < 1))
                hits++;
        }
        System.out.printf("%d hits in 100000 trials.\nHit frequency is %.3f.", hits, (double) hits / 100000);
    }
}