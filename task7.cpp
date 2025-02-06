#include <iostream>
using namespace std;
int main()
{
	cout << "enter size of array"<<endl;
	int a;
	int z;
	cin >> a;
	int arr[a];
	cout << "enter the numbers of array"<<endl;
	int maxN = arr[0];
	for (int i = 0;i < a;i++)
	{
		cin >> arr[i];
		int maxN = arr[0];
		if (arr[i] > maxN)
		{
			maxN = arr[i];
			z = maxN;
		}
	}
	cout << z;//опять же, vc хочет что бы а была константа, в онлайн компиляторе завелось
}