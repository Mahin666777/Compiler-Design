#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isValidIdentifier(string str)
{

    if (str[0] == ' ')
    {
        return false;
    }

    if (!((str[0] >= 'a' && str[0] <= 'z') || (str[0] >= 'A' && str[0] <= 'Z') || str[0] == '_'))
    {
        return false;
    }

    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9') || str[i] == '_'))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ifstream keywordFile("CppKeywords.txt");
    string keyword;
    string variableInput;
    cout << "Enter your variable name: ";
    getline(cin, variableInput);
    if (variableInput[0] == ' ')
    {
        cout << " 0 " << endl;
        cout << " Invalid identifier " << endl;
        cout << " Cause: Variable name cannot start with a space." << endl;
        return 0;
    }

    bool found = false;
    while (getline(keywordFile, keyword))
    {
        if (keyword.find(variableInput) < keyword.length())
        {
            found = true;
            break;
        }
    }

    if (found)
    {
        cout << " Keyword found in the file." << endl;
        cout << " That's why : " << endl;
        cout << " 0 " << endl;
        cout << " Invalid identifier " << endl;
        cout << " variable can't be a keyword " << endl;
    }
    else
    {
        if (isValidIdentifier(variableInput))
        {
            cout << " Keyword is not found in the file." << endl;
            cout << " That's why : " << endl;
            cout << " 1 " << endl;
            cout << " Valid identifier and it's a string " << endl;
            cout << " This variable is not a keyword " << endl;
        }
        else
        {
            for (char ch : variableInput)
            {
                if (ch == '@' || ch == '#' || ch == '$' || ch == ',' || ch == ';' || ch == '^' || ch == '!')
                {
                    cout << " 0 " << endl;
                    cout << " Invalid identifier " << endl;
                    cout << " Cause: There are special characters." << endl;
                    return 0;
                }
                else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%')
                {
                    cout << " 0 " << endl;
                    cout << " Invalid identifier " << endl;
                    cout << " Cause: There are arithmetic characters." << endl;
                    return 0;
                }
                else
                {
                    cout << " 0 " << endl;
                    cout << " Invalid identifier " << endl;
                    cout << " Cause: There are arithmetic characters and special characters." << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
