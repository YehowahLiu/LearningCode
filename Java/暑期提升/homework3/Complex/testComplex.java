import java.util.Scanner;

public class testComplex {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the first complex number:");
        Complex c1 = new Complex(in.nextDouble(), in.nextDouble());
        System.out.print("Enter the second complex number:");
        Complex c2 = new Complex(in.nextDouble(), in.nextDouble());
        in.close();

        System.out.print(c1.toString() + " + " + c2.toString() + " = " + Complex.addComplex(c1, c2).toString() + "\n");
        System.out.print(c1.toString() + " - " + c2.toString() + " = " + Complex.subComplex(c1, c2).toString() + "\n");
        System.out.print(c1.toString() + " * " + c2.toString() + " = " + Complex.mulComplex(c1, c2).toString() + "\n");
        System.out.print(c1.toString() + " / " + c2.toString() + " = " + Complex.divComplex(c1, c2).toString() + "\n");
        System.out.println("|" + c1.toString() + "| = " + c1.absComplex());
    }
}