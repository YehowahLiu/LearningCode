public class Item {
    private String name;
    private double price;

    public Item(String name, double price) {
        setItem(name, price);
    }

    public Item(String name) {
        setItem(name, 0);
    }

    public Item() {
        setItem("default_item", 0);
    }

    public void setItem(String name, double price) {
        setName(name);
        setPrice(price);
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public double getPrice() {
        return price;
    }
}