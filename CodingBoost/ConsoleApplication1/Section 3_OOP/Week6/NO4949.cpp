#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    while (true) {
        string str;
        getline(cin, str);

        if (str == ".") {
            break;
        }

        stack<char> s;
        bool flag = 0;
        for (int i = 0; i < str.length(); i++) {
            char c = str[i];

            if ((c == '(') || (c == '[')) {
                s.push(c);
            }
            else if (c == ')') {
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
            else if (c == ']') {
                if (!s.empty() && s.top() == '[') {
                    s.pop();
                }
                else {
                    flag = 1;
                    break;
                }
            }
        }

        if (flag == 0 && s.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }

    }

}
