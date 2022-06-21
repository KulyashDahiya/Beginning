import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Result {

    public static void main(String[] args) throws IOException {

        InputStreamReader r=new InputStreamReader(System.in);
        BufferedReader br=new BufferedReader(r);
        System.out.println("Enter menu: \n 1. Display Average scores for each subject \n 2. Display Average scores for all student");
        int n = Integer.parseInt(br.readLine());

        switch (n) {
            case 1:
//                sc = new Scanner(System.in);
                System.out.println("Enter student id : ");
                String sid = (br.readLine());

                System.out.println(getAvgScorebySID(sid));
                break;
            case 2:
//                sc = new Scanner(System.in);
                System.out.println("Enter subject id : ");
                int SubID = Integer.parseInt(br.readLine());
                System.out.println(getAvgScorebySubID(SubID));

        }

    }

    private static int getAvgScorebySID(String sid) {
        DataUtil dataUtil = new DataUtil();
        HashMap<String, ArrayList<Assignment>> map = dataUtil.getMap();
        ArrayList<Assignment> data = map.get(sid);
        //data.get(0).assignment_category.split('_')[0];
//        for (String name: map.keySet()) {
//            String key = name.toString();
//            String value = map.get(name).toString();
//            System.out.println(key + " " + value);
//        }
        return 0;
    }

    private static int getAvgScorebySubID(int subID) {
        return 1;


    }
}
