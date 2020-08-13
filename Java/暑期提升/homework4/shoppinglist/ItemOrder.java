public class ItemOrder {
    private int quantity;
    private Item item;

    public ItemOrder(Item item, int quantity) {
        this.item = item;
        this.quantity = quantity;
    }

    public ItemOrder(Item item) {
        this(item, 1);
    }

    public ItemOrder() {
        this(new Item(), 1);
    }

    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }

    public int getQuantity() {
        return quantity;
    }

    public double getOrderPrice() {
        double price = item.getPrice();
        int stackNum = item.getStackNum();
        double stackPrice = item.getStackPrice();
        if (quantity < stackNum || stackNum == 1 || stackPrice == stackNum * price) {
            return quantity * price;
        } else {
            return stackPrice * (int) (quantity / stackNum) + price * (quantity % stackNum);
        }
    }
}