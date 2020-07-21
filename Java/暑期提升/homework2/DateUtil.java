public class DateUtil {
    final static String[] Months = { "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov",
            "Dec" };

    static boolean isLeapYear(int year) {
        // returns true if the given year is a leap year
        return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    }

    static boolean isValidDate(int year, int month, int day) {
        // returns true if the given year, month and day constitute a given date
        if (day < 1 || month < 1 || month > 12 || day > 31)
            return false;
        switch (month) {
            case 4:
            case 6:
            case 9:
            case 11:
                return day <= 30;
            case 2:
                return isLeapYear(year) ? day <= 29 : day <= 28;
            default:
                return true;
        }
    }

    static int getDayOfWeek(int year, int month, int day) {
        // returns the day of the week,0 for SUN, 1 for MON, and -1 for invalid date
        if (!isValidDate(year, month, day))
            return -1;
        final int[] MonthTableNL = { 0, 0, 3, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 };
        final int[] MonthTableL = { 0, 6, 2, 3, 6, 1, 4, 6, 2, 5, 0, 3, 5 };
        int out = isLeapYear(year) ? MonthTableL[month] : MonthTableNL[month];
        out += day + year % 100 + (year % 100) / 4 + 2 * (5 - (year / 100) % 3);
        return out % 7;
    }

    static void printCalendar(int year, int month) {
        // print calendar of the specified year and month, according to the calendar
        // output format
        // final String[] DayInWeek = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"
        // };
        System.out.println("SUN\tMON\tTUE\tWED\tTHU\tFRI\tSAT");
        int i = 1 - getDayOfWeek(year, month, 1);
        int j = 0;
        while (true) {
            if (i < 1)
                System.out.print("\t");
            else if (isValidDate(year, month, i)) {
                System.out.print(i + "\t");
                if (j % 7 == 6)
                    System.out.print("\n");
            } else {
                System.out.print("\n");
                break;
            }
            i++;
            j++;
        }

    }

    static void printCalendar(int year) {
        // print claendar of the given year

        for (int i = 1; i < 13; i++) {
            System.out.print("\t\t" + Months[i] + "\n\n");
            printCalendar(year, i);
            System.out.println("");
        }
    }

    static String formatDate(int year, int month, int day) {
        // print the given date in the formate "xxxday d mmm yyyy",
        // e.g., "Tuesday 14 Feb 2012".
        if (!isValidDate(year, month, day))
            return "Invalid Date!";
        StringBuffer buffer = new StringBuffer();
        final String[] DayInWeekF = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
        buffer.append(DayInWeekF[getDayOfWeek(year, month, day)] + " " + day);
        buffer.append(" " + Months[month] + " " + year);
        return buffer.toString();
    }
}