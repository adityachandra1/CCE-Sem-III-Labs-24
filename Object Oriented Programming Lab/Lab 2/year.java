import java.util.*;
public class year
{
	public static void main(String args[])
	{
		int year;
		boolean flag=true;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter Year");
		year=sc.nextInt();
		if(year%4!=0)
			flag=false;
		else if(year%100==0&&year%400!=0)
			flag=false;
		if(flag)
			System.out.println("Leap year");
		else
			System.out.println("Not Leap Year");
	}
}
