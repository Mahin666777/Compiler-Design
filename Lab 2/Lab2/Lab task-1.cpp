#include <iostream>
using namespace std;

bool isNumericConstant(const string& a)
{
    for (char ch : a)
    {
        if (!isdigit(ch) && ch != '.')
        {
            return false;
        }
    }

    int declCount = 0;
    for (char ch : a)
    {
        if (ch == '.')
        {
            declCount++;
        }
    }

    return declCount <= 1;
}

int main() {
    string b;
    cout << "Enter a value: ";
    cin >> b;

    if (isNumericConstant(b))
    {
        cout << "This is numeric constant" << endl;
    } else
    {
        cout << "This is not numeric" << endl;
    }

    return 0;
}
