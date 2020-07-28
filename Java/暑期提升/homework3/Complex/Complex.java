public class Complex {
    private double real;
    private double img;

    // constructor
    public Complex(double a, double b) {
        real = a;
        img = b;
    }

    public Complex(double a) {
        this(a, 0);
    }

    public Complex() {
        this(0, 0);
    }

    public Complex(Complex c) {
        this(c.real, c.img);
    }

    // get Real (or Imaginary) part
    public double getRealPart() {
        return real;
    }

    public static double getRealPart(Complex c) {
        return c.getRealPart();
    }

    public double getImaginaryPart() {
        return img;
    }

    public static double getImaginaryPart(Complex c) {
        return c.getImaginaryPart();
    }

    // math operation(+ - * / abs)
    public void addComplex(Complex c) {
        real += c.real;
        img += c.img;
    }

    public static Complex addComplex(Complex c1, Complex c2) {
        Complex copy = new Complex(c1);
        copy.addComplex(c2);
        return copy;
    }

    public void subComplex(Complex c) {
        real -= c.real;
        img -= c.img;
    }

    public static Complex subComplex(Complex c1, Complex c2) {
        Complex copy = new Complex(c1);
        copy.subComplex(c2);
        return copy;
    }

    public void mulComplex(Complex c) {
        Complex result = new Complex(real * c.real - img * c.img, real * c.img + img * c.real);
        this.real = result.real;
        this.img = result.img;
    }

    public static Complex mulComplex(Complex c1, Complex c2) {
        Complex copy = new Complex(c1);
        copy.mulComplex(c2);
        return copy;
    }

    public void divComplex(Complex c) {
        Complex result = new Complex((real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
                (img * c.real - real * c.img) / (c.real * c.real + c.img * c.img));
        real = result.real;
        img = result.img;
    }

    public static Complex divComplex(Complex c1, Complex c2) {
        Complex copy = new Complex(c1);
        copy.divComplex(c2);
        return copy;
    }

    public double absComplex() {
        return Math.sqrt(real * real + img * img);
    }

    public static double absComplex(Complex c) {
        return c.absComplex();
    }

    // method toString
    public String toString() {
        if (Math.abs(real) < 0.000001) {
            if (Math.abs(img) < 0.000001) {
                return "0";
            } else {
                return img + "i";
            }
        } else {
            if (Math.abs(img) < 0.000001) {
                return String.format("%lf", real);
            } else {
                return real + " + " + img + "i";
            }
        }
    }

    public static String toString(Complex c) {
        return c.toString();
    }
}