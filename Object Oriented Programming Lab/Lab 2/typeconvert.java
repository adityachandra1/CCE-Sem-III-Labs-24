import java.util.*;
public class typeconvert
{
	public static void main(String args[])
	{
		int x;
		double y;
		Scanner sc=new Scanner(System.in);
		x=10;
		y=x;
		System.out.println(y);
		y=10.5;
		x=y;
		System.out.println(x);
		y=10.5;
		x=(int)y;
		System.out.println(x);
	}
}
		
		