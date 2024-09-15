class Computer
{
    public String playMusic()
    {
        return "Playing music";
    }

    public String getMePen(int cost)
    {	
		if (cost>0)
        	return "Pen cost is " + cost + " Rupees";

		return "Nothing";
    }
}

class Calculator
{
	public int add(int n1, int n2)
	{
		return n1 + n2;
	}
}


public class Main {

    public static void main(String[] args) 
    {
        Computer obj = new Computer();
        System.out.println(obj.playMusic());
        String pen = obj.getMePen(10);
        System.out.println(pen);

		Calculator obj1 = new Calculator();
		System.out.println(obj1.add(2,5));
    }
}
