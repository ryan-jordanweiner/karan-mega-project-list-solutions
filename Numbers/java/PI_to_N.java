//IMPORT REQUIRED FILES
import java.util.Scanner;
import java.math.BigDecimal;


public class Main
{
	public static void main(String[] args) 
	{
    //CREATE SCANNER OBJECT
		Scanner scanner = new Scanner(System.in);
		System.out.println("Enter number of digits of PI you would like to see: ");
		int digits = scanner.nextInt();
		float pi  = 0;
		float denom = 1;
		float multiplier = 4;
    
    //CALCULATE PI
		for(long i = 0; i < 10000000; i++)
		{
			if (i%2!=0)
			{
				pi+=1/denom;
				denom+=2;
			}
			
			else
			{
				pi-=1/denom;
				denom+=2;
			}
		}
		pi*= -multiplier;
    
    //PRINT PI TO DESIGNATED PRECISION
		System.out.println(BigDecimal.valueOf(pi).setScale(digits, BigDecimal.ROUND_HALF_DOWN).floatValue());

	}
}
