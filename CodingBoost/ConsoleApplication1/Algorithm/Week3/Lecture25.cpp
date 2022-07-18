//배열포인터
#include<stdio.h>

int main() {
	/*예제 1번
	int a = 10;
	int* ptr_a = &a; //선언과 동시에 초기화 가능
	 
	printf("ptr_a의 값:%d\n", ptr_a);
	printf("ptr_a+1의 값:%d\n", ptr_a + 1);//4차이가 남. int라서 4byte 
	*/

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	/*
	printf("arr의 값:%d\n", arr); //arr[0]의 주소값이랑 같음
	for (int i = 0;i < 10;i++) {
		printf("&arr[%d]=%d\n",i, &arr[i]);
		printf("arr+%d=%d\n", i, arr + i);//위에 줄이랑 같은 의미
	}
	*/

	for (int i = 0;i < 10;i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	for (int i = 0;i < 10;i++) {
		printf("%d", *(arr + i));
	}
	printf("\n");

	for (int* ptr = arr;ptr < arr + 10;ptr++) {
		printf("%d", *ptr);
	}
	printf("\n");
}

