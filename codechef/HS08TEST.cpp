#include <iostream>
using namespace std;
int main()
{
	int withdraw; float balance;
	cin>> withdraw >> balance;
	if((withdraw+0.5)>balance||(withdraw%5!=0))
	{
		cout<<balance;
	}
	else
	{
		cout<< (balance-withdraw-0.5);
	}
}
	 
