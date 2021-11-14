import java.util.*;
public class convert
{
	public static void main(String args[])
	{
		int i;
		double d;
		char c;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter int");
		i=sc.nextInt();
		System.out.println("Enter double");
		d=sc.nextDouble();
		System.out.println("Enter char");
		c=sc.next().charAt(0);
		System.out.println((byte)i);
		System.out.println((int)c);
		System.out.println((byte)d);
		System.out.println((int)d);
	}
}
