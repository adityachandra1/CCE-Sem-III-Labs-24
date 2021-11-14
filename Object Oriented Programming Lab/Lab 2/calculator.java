import java.util.*;
public class calculator
{
	public static void main(String args[])
	{
		double d,e;
		char c,ch;
		Scanner sc=new Scanner(System.in);
		do{
			System.out.println("Enter first number");
			d=sc.nextDouble();
			System.out.println("Enter operation");
			c=sc.next().charAt(0);
			System.out.println("Enter second number");
			e=sc.nextDouble();
			switch(c)
			{
				case '+' :
				System.out.println(d+e);
				break;
				case '-' :
				System.out.println(d-e);
				break;
				case '*' :
				System.out.println(d*e);
				break;
				case '/' :
				System.out.println(d/e);
				break;
				default:
				System.out.println("Wrong Input");
		
			}
			System.out.println("Continue?Y/N");
			ch=sc.next().charAt(0);
		}while(ch=='y'||ch=='Y');
	}
}
