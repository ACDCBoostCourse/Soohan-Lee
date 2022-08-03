#include <iostream>
using namespace std;

int main() {
    int jeminis[9], startlink[9];
    int state = 0;
    int JScore = 0;
    int SScore=0;
    for (int i = 0; i <9; i++) cin >> jeminis[i]; //jeminis 점수 회차별로 입력받기
    for (int i = 0; i < 9; i++) cin >> startlink[i];//starlink 점수 회차별로 입력받기
    for (int i = 0; i < 9; i++) {
        JScore += jeminis[i]; //jeminis 점수 회차별로 합치기
        if (JScore > SScore) state = 1; //jeminis가 이기고 있는 상태
        SScore += startlink[i]; //statlink 점수 회차별로 합치기
        if (JScore < SScore && state == 1) state = 2; //starlink가 jeminis를 역전한 상태
    }
    if (state == 2) cout << "Yes"<<endl;
    else cout << "No"<<endl;
}