#include<iostream>
using namespace std;

int main()
{
    int x, y;
    float num[282], sum=0, avg;

    cout << "Enter the numbers of Array : ";
    cin >> x;

    while (x > 282 || x <= 0)
    {
        cout << "Number should in range of (1 to 282)." << endl;
        cout << "Enter the number again: ";
        cin >> x;
    }

    for(y = 0; y < x; ++y)
    {
        cout << y + 1 << " Enter number: ";
        cin >> num[y];
        sum += num[y];
    }

    avg = sum / x;
    cout << "Average = " << avg;

    return 0;
}
