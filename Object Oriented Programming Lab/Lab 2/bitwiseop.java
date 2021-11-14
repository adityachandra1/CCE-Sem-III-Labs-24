import java.util.*;
public class bitwiseop
{
	public static void main(String args[])
	{
		int a,b;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter number");
		a=sc.nextInt();
		;
		System.out.println(a+" *2="+(a<<1));
		System.out.println(a+" /2="+(a>>1));
	}
}