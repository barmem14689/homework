

#include <iostream>
using namespace std;
int main()
{
    int a;
    int c;
    int z;
    int s = 0;
    cout << "enter number of customers ";
    cin >> a;
    int arr[a];
    cout << "enter age of customers ";
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] > arr[i - 1])
        {
            c = arr[i];
        }
        else if (arr[i] < arr[i - 1])
        {
            z = arr[i];
        }
        s = s + arr[i];
    }
    cout << "the oldest: " << c << endl;
    cout << "the youngest: " << z << endl;
    cout << "average: " << s / a << endl;
    //на vs не завелся, но в онлайн компиляторе заработал
}

