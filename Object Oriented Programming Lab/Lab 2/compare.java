import java.util.*;
public class compare
{
	public static void main(String args[])
	{
		int x,y,z,max;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter three numbers");
		x=sc.nextInt();
		y=sc.nextInt();
		z=sc.nextInt();
		max=x>y?x:y;
		max=max>z?max:z;
		System.out.println("Greatest no.: "+max);
	}
}
		
		