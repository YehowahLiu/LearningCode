public class MyTime {
    private int hour;
    private int minute;
    private int second;

    // Constructor
    public MyTime(int hour, int minute, int second) {
        this.hour = hour;
        this.minute = minute;
        this.second = second;
    }

    public MyTime(int hour, int minute) {
        this(hour, minute, 0);
    }

    public MyTime(int hour) {
        this(hour, 0, 0);
    }

    public MyTime(MyTime mytime) {
        this(mytime.hour, mytime.minute, mytime.second);
    }

    public MyTime() {
        this(0, 0, 0);
    }

    // String format
    public String toUniversalString() {
        if (!isValidDate())
            return errorString();
        return String.format("%02d:%02d:%02d", hour, minute, second);
    }

    public String toString() {
        if (!isValidDate())
            return errorString();
        if (hour >= 12)
            return String.format("%02d:%02d:%02d  PM", (hour == 12 ? hour : hour - 12), minute, second);
        return String.format("%02d:%02d:%02d  AM", hour, minute, second);
    }

    private boolean isValidDate() {
        return hour >= 0 && hour <= 23 && minute >= 0 && minute <= 59 && second >= 0 && second <= 59;
    }

    private String errorString() {
        StringBuffer buffer = new StringBuffer();
        if (hour < 0 || hour > 23)
            buffer.append("hour must be 0-23\n");
        if (minute < 0 || minute > 59)
            buffer.append("minute must be 0-59\n");
        if (second < 0 || second > 59)
            buffer.append("second must be 0-59\n");
        return buffer.toString();
    }

    // increment time
    public void incrementHour() {
        hour = (hour + 1) % 24;
    }

    public void incrementMinute() {
        minute += 1;
        if (minute == 60) {
            minute = 0;
            incrementHour();
        }
    }

    public void incrementSecond() {
        second += 1;
        if (second == 60) {
            second = 0;
            incrementMinute();
        }
    }
}