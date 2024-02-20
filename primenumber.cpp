#include<iostream>
using namespace std;
int main()
{
    int n,p=0;
	int i=1;
	
	cout << "Enter the number " << endl; 
	cin >> n;
	while(n>0)
	{
	if (n% i == 0)
	{
	p=p+1;	
	}
}
	if (p==2){
		cout << "Prime Number" << endl;
	}
	else
	{
		cout << "Not  A prime number " << endl;
	}
	
	
	return 0;
}
