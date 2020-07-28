import java.awt.Color;
import java.util.Random;
import javax.swing.JFrame;
import homework3.DrawPanel;
import homework3.MyCircle;

public class testMyCircle {
    public static void main(String[] args) {
        DrawPanel panel = new DrawPanel(generateCircles());
        JFrame application = new JFrame();
        application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        application.add(panel);
        application.setSize(300, 300);
        application.setVisible(true);
    }

    public static MyCircle[] generateCircles() {
        Random randomNumber = new Random();
        MyCircle[] circles;

        circles = new MyCircle[5 + randomNumber.nextInt(5)];

        for (int count = 0; count < circles.length; count++) {
            int x = randomNumber.nextInt(300);
            int y = randomNumber.nextInt(300);
            int radius = randomNumber.nextInt(300);

            Color color = new Color(randomNumber.nextInt(256), randomNumber.nextInt(256), randomNumber.nextInt(256));
            circles[count] = new MyCircle(x, y, radius, color);
        }
        return circles;
    }
}