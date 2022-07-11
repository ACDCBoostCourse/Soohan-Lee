#include <iostream>

using namespace std;
int main() {
	int num;
	double score[1000];
	double max = 0;
	double result = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> score[i];
	}
	for (int i = 0; i < num;i++) {

		if (max < score[i]) {
			max = score[i];
		}

	}
	for (int i = 0; i < num; i++) {
		score[i] = (score[i] / max * 100.0);
		result += score[i];
	}

	cout << result / num << endl;

	return 0;

}