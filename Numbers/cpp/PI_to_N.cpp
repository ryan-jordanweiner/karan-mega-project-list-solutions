//INLCUDE REQUIRED HEADER FILES
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  //SET VALUES TO BE USED IN CALCULATIONS
	float denom = 1;
	float multiplier = 4;
	double pi = 0;
  //CALCULATE PI
	for (long i = 0; i < 10000000; i++)
	{
		if (i%2 != 0)
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
	pi*=multiplier;
  
	int digits = 0;
  //GET USER INPUT FOR NUMBER OF DIGITS 
	cout<<"How many digits of PI would you like to see? "<<endl;
	cin>>digits;
  //SET IOSTREAM PRECISION TO DESIGNATED NUMBER
	cout<<setprecision(digits+1);
  //OUTPUT
	cout<<-pi<<endl;

	return 0;
}
