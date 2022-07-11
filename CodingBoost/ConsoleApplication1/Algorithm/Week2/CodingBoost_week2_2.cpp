#include <iostream>
#include <string>
using namespace std;

int main()
{
	int count[10] = {  };
	int a, b, c;
	int result;

	cin >> a >> b >> c;

	result = a * b * c;

	while (result != 0)
	{
		count[result % 10] += 1;
		result /= 10;
	}
	for (int i = 0;i < 10;i++) {
		cout << count[i] << endl;
	}
	return 0;

}