import java.util.*;
public class expcalc
{
	public static void main(String args[])
	{
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter two numbers");
		a=sc.nextInt();
		b=sc.nextInt();
		System.out.println((a<<2)+(b>>2));
		System.out.println((b>0));
		System.out.println((a+b*100)/10);
		System.out.println((a&b));
	}
}
		
		