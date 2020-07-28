package homework3;

import java.awt.Color;
import java.awt.Graphics;

public class MyRectangle {
    private int x;
    private int y;
    private int width;
    private int height;
    private Color color;

    public MyRectangle(int x, int y, int width, int height, Color color) {
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.color = color;
    }

    public MyRectangle(int x, int y, int width, int height) {
        this(x, y, width, height, Color.red);
    }

    public MyRectangle(int x, int y, int width, Color color) {
        this(x, y, width, width, color);
    }

    public MyRectangle(int x, int y, int width) {
        this(x, y, width, width, Color.red);
    }

    public MyRectangle(int x, int y) {
        this(x, y, 10, 10, Color.red);
    }

    public void draw(Graphics g) {
        g.setColor(color);
        g.drawRect(x, y, width, height);
    }
}