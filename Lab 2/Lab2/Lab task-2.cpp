#include <iostream>
using namespace std;

bool isOperator(char n) {
    return (n == '+' || n == '-' || n == '*' || n == '/' || n == '%' || n == '=');
}

int main() {
    string u;
    cout << "Enter  any character : ";
    cin >> u;

    for (char m : u)
    {
        if (isOperator(m))
        {
            cout<< " Operator :"<< m <<endl;

        }

    }

    return 0;

}

