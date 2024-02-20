#include<iostream>
using namespace std;
int main()
{
	//prime number different method
	int n;
	
	cout << "Enter the number " << endl; 
	cin >> n;
	int i = 2;
	bool IsPrime = false;
	while(i<n)
	{
		if(n % i == 0)
		{
		
		IsPrime = false;
		break;
	    }
	    i=i+1;
	}
		if(IsPrime){
			cout << "It is prime" << endl;
		}
		else
		{
			cout << "It is not a prime number" << endl;
		}
		return 0;
		
	}
	
	
