#include <iostream>
using namespace std;

int main() {
    char input[75];
    cout << " Give here an input : ";
    cin >> input;

    bool valid = true;
    bool firstCharCheck = false;
    bool arithmeticOperatorCheck = false;
    bool specialCharCheck = false;

    if (!((input[0] >= 'A' && input[0] <= 'Z') || (input[0] >= 'a' && input[0] <= 'z') || input[0] == '_')) {
        valid = false;
        firstCharCheck = true;
    }

    for (int i = 1; input[i] != '\0'; ++i) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '_')) {
            valid = false;
        }
    }

    for (int i = 0; input[i] != '\0'; ++i) {
        if (!((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z') || (input[i] >= '0' && input[i] <= '9') || input[i] == '_')) {
            valid = false;

            for (int j = 0; input[j] != '\0'; ++j) {
                if (input[j] == '+' || input[j] == '-' || input[j] == '*' || input[j] == '/' || input[j] == '%') {
                    arithmeticOperatorCheck = true;
                    break;
                }
            }

            for (int j = 0; input[j] != '\0'; ++j) {
                if (input[j] == '#' || input[j] == '@' || input[j] == '!' || input[j] == '$' || input[j] == '^' || input[j] == '&' || input[j] == '?') {
                    specialCharCheck = true;
                    break;
                }
            }

            for (int j = 0; input[j] != '\0'; ++j) {
                if (input[j] == '#' || input[j] == '@' || input[j] == '!' || input[j] == '$' || input[j] == '^' || input[j] == '&' || input[j] == '?' || input[j] == '+' || input[j] == '-' || input[j] == '*' || input[j] == '/' || input[j] == '%') {
                    arithmeticOperatorCheck = true;
                    specialCharCheck = true;
                    break;
                }
            }
        }
    }

    if (!valid) {
        cout << " 0 " << endl;
        cout << " Invalid Identifier  " << endl;

        if (firstCharCheck) {
            cout << " Cause: First character should be an alphabet character or underscore." << endl;
        }

        if (arithmeticOperatorCheck) {
            cout << " Cause: There are arithmetic operators." << endl;
        }

        if (specialCharCheck) {
            cout << " Cause: There are special characters." << endl;
        }
    } else {
        cout << " 1 " << endl;
        cout << " Valid Identifier  " << endl;
    }

    return 0;
}
