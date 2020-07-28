package homework3;

import java.awt.Color;
import java.awt.Graphics;

public class MyCircle {
    private int x;
    private int y;
    private int radius;
    private Color color;

    public MyCircle(int x, int y, int radius, Color color) {
        this.x = x;
        this.y = y;
        this.radius = radius;
        this.color = color;
    }

    public MyCircle(int x, int y, Color color) {
        this(x, y, 10, color);
    }

    public MyCircle(int x, int y, int radius) {
        this(x, y, radius, Color.red);
    }

    public MyCircle(int x, int y) {
        this(x, y, 10, Color.red);
    }

    public void draw(Graphics g) {
        g.setColor(color);
        g.drawArc(x - radius, y - radius, 2 * radius, 2 * radius, 0, 360);
    }
}