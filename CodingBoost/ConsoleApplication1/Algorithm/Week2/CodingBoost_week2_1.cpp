#include <iostream>
#include <string>

using namespace std;

#define ALPHABETNUM 26



int main()
{
	string str;
	int arr[ALPHABETNUM] = { 0, };
	int max_count = 0;
	int index = 0;
	int count = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		int n = str[i];
		if (n < 97)//대문자
			arr[n - 65]++;
		else //소문자
			arr[n - 97]++;
	}

	for (int i = 0; i < ALPHABETNUM; i++) {
		if (arr[i] > max_count) {
			max_count = arr[i];
			index = i;
		}
	}
	for (int i = 0; i < ALPHABETNUM; i++) {
		if (arr[i] == max_count) {
			count++;
			if (count >= 2) {
				cout << "?" << endl;
				return 0;
			}
		}
	}
	cout << (char)(index + 65) << endl;
	return 0; 
}