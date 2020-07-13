public class SumOfTwoDice{
    public static void main(String[] args){
        double res = Math.ceil(6 * Math.random()) + Math.ceil(6 * Math.random());
        System.out.println(res);
    }
}