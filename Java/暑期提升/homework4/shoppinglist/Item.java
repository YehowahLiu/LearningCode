public class Item {
    private String name;
    private double price;
    private int stackNum;
    private double stackPrice;

    // Constructor
    public Item(String name, double price, int stackNum, double stackPrice) {
        setItem(name, price, stackNum, stackPrice);
    }

    public Item(String name, double price) {
        setItem(name, price);
    }

    public Item(String name) {
        setItem(name, 0);
    }

    public Item() {
        setItem("default_item", 0);
    }

    // method to set values
    public void setItem(String name, double price) {
        setItem(name, price, 1, price);
    }

    public void setItem(String name, double price, int stackNum, double stackPrice) {
        setName(name);
        setPrice(price);
        setStackNum(stackNum);
        setStackPrice(stackPrice);
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(double price) {
        if (price < 0) {
            System.out.println("Invalid price!\nSet to default price (0).");
            price = 0;
        }
        this.price = price;
    }

    public void setStackNum(int stackNum) {
        if (stackNum <= 0) {
            System.out.println("Invalid stack number!\nSet to default stack number (1).");
            stackNum = 1;
        }
        this.stackNum = stackNum;
    }

    public void setStackPrice(double stackPrice) {
        if (stackPrice > stackNum * price) {
            System.out.println("Don't take us as idiot!!!");
            System.out.println("Set to default stack price.(equals single item price * stack number)");
            stackPrice = stackNum * price;
        }
        this.stackPrice = stackPrice;
    }

    // method to get values
    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }

    public int getStackNum() {
        return stackNum;
    }

    public double getStackPrice() {
        return stackPrice;
    }
}