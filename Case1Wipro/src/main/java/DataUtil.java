import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;

public class DataUtil {
    HashMap<String, ArrayList<Assignment>> map;

    DataUtil() {
        map = new HashMap<>();
        addData(1, "kul", "maths", "test_1", new Date(), 30);
        addData(1, "kul", "ma1ths", "test_1", new Date(), 30);
        addData(1, "spa", "maths", "test_1", new Date(), 30);
        addData(1, "spa", "maths", "test_1", new Date(), 30);
        addData(1, "spa", "maths", "test_1", new Date(), 30);
        addData(1, "spa", "maths", "test_1", new Date(), 30);
        addData(1, "spa", "maths", "test_1", new Date(), 30);
    }

    private void addData(int serial_no, String student_name, String subject, String ass_cat, Date date, int score) {
        if (map.containsKey(student_name)) {
            ArrayList<Assignment> mp = map.get(student_name);
            mp.add(new Assignment(serial_no, student_name, subject, ass_cat, date, score));
            map.put(student_name, mp);
        } else
            map.put(student_name, new ArrayList<Assignment>() {{
                add(new Assignment(serial_no, student_name, subject, ass_cat, date, score));
            }});

    }

    public HashMap<String, ArrayList<Assignment>> getMap() {
        return map;
    }
}
