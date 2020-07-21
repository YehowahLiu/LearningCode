public class Distance {
    public static void main(String[] args) {
        double x = Double.parseDouble(args[0]);
        double y = Double.parseDouble(args[1]);
        double res = Math.sqrt(x * x + y * y);
        System.out.print("Euclidean Distance to (0,0) is ");
        System.out.println(res);
    }
}