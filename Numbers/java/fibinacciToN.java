import java.util.Sacnner;	
public class Main
{
	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		System.out.println("N: ");
		int n = 0;
		int a = 0;
		int b = 1;
		int counter = 0;
		n = scanner.nextInt();
		for(int i = 0; i < n; i++)
		{
			if(counter >= n)
			{
				break;
			}
			System.out.println(a);
			a+=b;
			counter ++;

			if (counter < n)
			{
				counter++;
				System.out.println(b);
				b+=a;
			}
		}
	}
}
