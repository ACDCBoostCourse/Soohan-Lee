#include <iostream>

using namespace std;

int T;

int main() {
    cin >> T;
    while (T--) {
        int cnt = 0, total = 0;
        string s;
        cin >> s;

        for (int i = 0;i < s.length();i++)
            if (s[i] == 'O') {
                cnt++;
                total += cnt;
            }
            else cnt = 0;

        cout << total << "\n";
    }
}
출처: https://tooo1.tistory.com/269 [개발자 퉁이리:티스토리]