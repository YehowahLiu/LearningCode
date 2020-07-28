public class TestTime {
    public static void main(String[] args) {
        MyTime t1 = new MyTime();
        MyTime t2 = new MyTime(2);
        MyTime t3 = new MyTime(21, 34);
        MyTime t4 = new MyTime(12, 25, 42);
        MyTime t5 = new MyTime(t4);

        System.out.println("Constructed with:");
        System.out.println("t1: all arguments defaulted");
        System.out.printf("\t%s\n", t1.toUniversalString());
        System.out.printf("\t%s\n", t1.toString());

        System.out.println("t2: hour specified; minute and second defaulted");
        System.out.printf("\t%s\n", t2.toUniversalString());
        System.out.printf("\t%s\n", t2.toString());

        System.out.println("t3: hour and minute specified; second defaulted");
        System.out.printf("\t%s\n", t3.toUniversalString());
        System.out.printf("\t%s\n", t3.toString());

        System.out.println("t4: hour, minute and second specified");
        System.out.printf("\t%s\n", t4.toUniversalString());
        System.out.printf("\t%s\n", t4.toString());

        System.out.println("t5: MyTime object t4 specified");
        System.out.printf("\t%s\n", t5.toUniversalString());
        System.out.printf("\t%s\n", t5.toString());

        MyTime t6 = new MyTime(15, 74, 99);
        System.out.println("t6: invalid values");
        System.out.printf("%s\n", t6.toUniversalString());

        MyTime t7 = new MyTime(23, 59, 59);
        MyTime t8 = new MyTime(21, 35, 59);
        MyTime t9 = new MyTime(20, 59, 10);
        MyTime t10 = new MyTime(23, 0, 59);

        System.out.printf("t7:\n\t%s + 1 second = ", t7.toUniversalString());
        t7.incrementSecond();
        System.out.println(t7.toUniversalString() + "\n");

        System.out.printf("t8:\n\t%s + 1 second = ", t8.toUniversalString());
        t8.incrementSecond();
        System.out.println(t8.toUniversalString() + "\n");

        System.out.printf("t9:\n\t%s + 1 minute = ", t9.toUniversalString());
        t9.incrementMinute();
        System.out.println(t9.toUniversalString() + "\n");

        System.out.printf("t10:\n\t%s + 1 hour = ", t10.toUniversalString());
        t10.incrementHour();
        System.out.println(t10.toUniversalString() + "\n");
    }
}