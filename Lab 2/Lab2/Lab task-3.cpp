#include <iostream>
using namespace std;

int isComment(string s);

int main()
  {
    string n;

    cout << "Please enter your string: "<<endl<<endl;
    getline(cin, n);

    cout << "Input String is : " << n << endl<<endl;

    if (isComment(n) == 1)
    {
        cout << "This  is a single-lined comment" << endl;
    }
    else if (isComment(n) == 2)
    {
        cout << "This is a multi-lined comment" << endl;
    }
    else
    {
        cout << "This is not a comment" << endl;
    }

  }

int isComment(string s)
  {
    int n = s.length();

    if (s.find("//") != string::npos)
    {
        return 1;
    }

    if (n >= 4 && s.substr(0, 2) == "/*" && s.substr(n - 2, 2) == "*/")
    {
        return 2;
    }

    return 0;
  }

