//배열포인터
#include <iostream>

int main()
{
	/*
	int arr[3] = { 1,2,3 };
	int* ptr = arr; //이거는 배열 포인터 아님
	for (int i = 0;i < 3;i++) {
		printf("%d", *(ptr + i));
	 }
	printf("\n");

	for (int i = 0;i < 3;i++) {
		printf("%d", ptr[i]);
	}
	printf("\n");
	//arr[i]==*(arr+1)==*(ptr+i)==*(i+ptr)==i[ptr]
	for (int i = 0;i < 3;i++) {
		printf("%d", i[ptr]);//위에 것이랑 똑같이 나옴
	}
	printf("\n");
	*/

	/*
	1. ptr==&ptr[0]
	2. *ptr==ptr[0]
	3. ptr+1==ptr에 sizeof(*ptr)을 더한 값
	*/
	/*
	int arr[3] = { 1,2,3 };

	printf("arr=%d\n", arr);
	printf("arr+1=%d\n", arr + 1);
	printf("&arr=%d\n", &arr);
	printf("&arr+1=%d\n", &arr + 1);//12차이남
	*/
	int arr[3] = { 1,2,3 };

	int(*ptr_arr)[3];//길이가 3인 int형 배열을 가리키는 포인터를 선언
	ptr_arr = &arr;

	for (int i = 0;i < 3;i++) {
		printf("%d\n", (*ptr_arr)[i]);

	}
}
