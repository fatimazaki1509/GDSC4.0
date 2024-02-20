#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=1;
	int fact=1;
	cout << "Enter the number " << endl; 
	cin >> n;
	if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
	while( i<= n)
	{
		fact=fact*i;
		i=i+1;
	}
	cout << "Factorial of " << n << " is: " << fact << endl;
}
	return 0;
}

	
