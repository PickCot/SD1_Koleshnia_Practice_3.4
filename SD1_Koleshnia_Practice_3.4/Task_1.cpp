#include <iostream>
using namespace std;
int NSD(int, int);

int main()
{
	int i, nsd, n[10];
	for (i = 0; i < 10; i++)
	{
		cout << "Please input integer number\n";
		cin >> n[i];
	}
	nsd = n[0];
	for (i = 1; i < 10; i++)
	{
	nsd = NSD(nsd, n[i]);
	}
	
	cout << nsd;
}