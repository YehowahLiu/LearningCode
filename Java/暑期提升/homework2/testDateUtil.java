import java.util.Calendar;

public class testDateUtil {
    public static void main(String[] args) {
        int[] testYear = { 2000, 2020, 2019, 2008, 2016, 2100 };
        int[][] testDate = { { 2020, 2, 29 }, { 2000, 2, 29 }, { 2020, 7, 32 }, { 2020, 15, 1 }, { 2020, 1, 35 },
                { 2100, 2, 29 } };
        System.out.println("Test method:isLeapYear()\n");

        Calendar c = Calendar.getInstance();
        for (int year : testYear) {
            c.set(year, 2, 1);
            c.add(Calendar.DAY_OF_MONTH, -1);
            if ((c.get(Calendar.DAY_OF_MONTH) == 29) == DateUtil.isLeapYear(year)) {
                System.out.printf("Year %d Passed.\n", year);
            } else {
                System.out.printf("ERROR AT YEAR %d\n", year);
            }
        }

        System.out.println("\n\nTest method: isValidDate(), formateDate(), getDayOfWeek.");
        for (int[] date : testDate) {
            System.out.println("\n--------------------------");
            System.out.printf("%d-%d-%d\n", date[0], date[1], date[2]);
            boolean flag = DateUtil.isValidDate(date[0], date[1], date[2]);
            System.out.println("Is Valid Date?  " + flag);
            if (flag) {
                c.set(date[0], date[1], date[2]);
                System.out.println("Date Formate:\n    " + DateUtil.formatDate(date[0], date[1], date[2]));
                if ((c.get(Calendar.DAY_OF_WEEK) + 5) % 7 == DateUtil.getDayOfWeek(date[0], date[1], date[2])) {
                    System.out.println("Correct DayOfWeek.");
                } else {
                    System.out.println("ERROR DayOfWeek!!!");
                }
            }
        }

        System.out.println("\n\n--------------------------");
        System.out.println("Test method: printCalender().\n");
        System.out.println("Calener of 2000\n");
        DateUtil.printCalendar(2000);
        System.out.println("\n\nCalender of 2020 Feb\n");
        DateUtil.printCalendar(2020, 2);

        System.out.println("\n\n--------------------------");
        System.out.println("Test over.Please check the result.");
    }
}