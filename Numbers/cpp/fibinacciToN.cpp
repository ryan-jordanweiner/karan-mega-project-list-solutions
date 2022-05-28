#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Fibinacci sequence to n numbers"<<endl;
	cout<<"N: ";
	cin>>n;
	int counter = 0;

	int a = 0;
	int b = 1;
	for (int i = 0; i < n; i++)
	{	
		if (counter >= n)
		{
			break;
		}
		else
		{
			cout<<a<<endl;
			counter++;
			if(counter < n)
			{
				cout<<b<<endl;
				counter++;
			}
		}
		a+=b;
		b+=a;
	}

	return 0;
}
