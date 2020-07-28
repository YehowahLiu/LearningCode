import java.awt.Color;
import java.util.Random;
import javax.swing.JFrame;
import homework3.DrawPanel;
import homework3.MyRectangle;

public class testMyRectangle {
    public static void main(String[] args) {
        DrawPanel panel = new DrawPanel(generateRectangles());
        JFrame application = new JFrame();
        application.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        application.add(panel);
        application.setSize(300, 300);
        application.setVisible(true);
    }

    public static MyRectangle[] generateRectangles() {
        Random randomNumber = new Random();
        MyRectangle[] rectangles;

        rectangles = new MyRectangle[5 + randomNumber.nextInt(5)];

        for (int count = 0; count < rectangles.length; count++) {
            int x = randomNumber.nextInt(300);
            int y = randomNumber.nextInt(300);
            int width = randomNumber.nextInt(300);
            int height = randomNumber.nextInt(300);

            Color color = new Color(randomNumber.nextInt(256), randomNumber.nextInt(256), randomNumber.nextInt(256));
            rectangles[count] = new MyRectangle(x, y, width, height, color);
        }
        return rectangles;
    }

}