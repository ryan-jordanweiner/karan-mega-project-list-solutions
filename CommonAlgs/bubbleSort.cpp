#include <iostream>
using namespace std;



int main()
{
	int arr[] = {1, -3, 8, 15, 7, 0, 2, 1, 3};
	int length = sizeof(arr)/sizeof(arr[0]);
	int passes = 0;
	int changes;
	for (int i = 0; i < length; i++)
	{
		changes = 0;
		for (int i = 0; i < length-1; i++
)		{
			if (arr[i]>arr[i+1])
			{
				changes++;
				int temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}



		if (changes = 0)
		{
			break;
		}
		passes++;

	}

	for (int i = 0; i < length; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Passes: "<<passes<<endl;
	

	return 0;
}
