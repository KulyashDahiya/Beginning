import java.util.Date;

public class Assignment {
    int Serial_no;
    String student_name;
    String subject;
    String assignment_category;
    Date date;
    int points;

    public Assignment(int serial_no, String student_name, String subject, String assignment_category, Date date, int points) {
        Serial_no = serial_no;
        this.student_name = student_name;
        this.subject = subject;
        this.assignment_category = assignment_category;
        this.date = date;
        this.points = points;
    }

    @Override
    public String toString() {
        return "Assignment{" +
                "Serial_no=" + Serial_no +
                ", student_name='" + student_name + '\'' +
                ", subject='" + subject + '\'' +
                ", assignment_category='" + assignment_category + '\'' +
                ", date=" + date +
                ", points=" + points +
                '}';
    }
}
