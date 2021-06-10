#include <iostream>
using namespace std;
int main()
{
	int n, sum = 0;
	do
	{
		cout << "Введіть число\n";
		cin >> n;
		sum += n;
	}while (n!=0);
	cout << "Сума елементів: " << sum;
}