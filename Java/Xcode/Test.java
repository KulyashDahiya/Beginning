public class Test {

    public static void main(String[] args) {
        // TODO Auto-generated method stub
        Person p1 = new Person();
        p1.age = 21;
        p1.name = "Kulyash";
        System.out.println(p1.name);
        Person p2 = new Person(21, "Kulyash Dahiya");
        System.out.println(Person.count);
        System.out.println(p2.name + " " + p2.age);
        p2.code();

    }

}

class Person {
    int age;
    String name;

    static int count;

    public Person() {
        count++;
        System.out.println("creating an object");
    }
    
    public Person(int age, String name) {
            this();
            this.age = age;
            this.name = name;
        }

        void code() {
            System.out.println(name + " codes like\n a pro");
        }
    }
