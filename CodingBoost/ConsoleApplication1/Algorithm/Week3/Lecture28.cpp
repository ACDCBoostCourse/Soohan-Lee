//포인터배열:포인터들이 배열되어 있는것 vs 배열 포인터:배열을 가르키는 포인터
#include <stdio.h>

int main()
{
	/*
	int a = 10;
	int b = 20;
	int c = 30;
	int d = 40;
	
	
	int* ptr[4];//포인터배열

	ptr[0] = &a;
	ptr[1] = &c;
	ptr[2] = &d;
	ptr[3] = &b;

	printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]);
	*/
	/*
	int arr[4] = { 1,2,3,4 };
	int* ptr[4];

	for (int i = 0;i < 4;i++) {
		ptr[i] = &arr[i];
	}
	for (int i = 0;i < 4;i++) {
		printf("%d", *ptr[i]);
	}
	printf("\n");
	*/
	/*
	char str[] = "Hello";

	printf("%s\n", &str[0]);//str과 똑같음
	*/

	char strings[3][10] = { "Hello","World","Doodle" };
	char* p_str[3];

	for (int i = 0;i < 3;i++) {
		p_str[i] = strings[i];
	}
	for (int i = 0; i < 3;i++) {
		printf("%s\n", strings[i][0]);//strings[i]랑 같음
	}
}
