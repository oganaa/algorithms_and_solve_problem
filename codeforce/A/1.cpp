import java.util.Scanner;

public
class MainBod
{

public
	static void main(String[] args)
	{
		// TODO Auto-generated method stub
		double m, n, a;
		Scanner in = new Scanner(System.in);
		m = in.nextDouble();
		n = in.nextDouble();
		a = in.nextDouble();
		double m1 = Math.ceil(m / a);
		double n1 = Math.ceil(n / a);
		long hariu = (long)(n1 * m1);
		System.out.println(hariu);
	}
}