//포인터: 변수의 주소를 저장하는 변수
#include<stdio.h>

int main() {
	/* 예제 1번
	int a = 20;
	int *ptr_a; //포인터 하나 선언(*로 구분)
	ptr_a = &a; //&는 주소값 여기서는 a의 주소값을 의미
	printf("a의 값: %d\n", a);
	printf("a의 주소값:%d\n", &a);
	printf("ptr_a에 저장된 값: %d\n", ptr_a);
	printf("ptr_a가 가르키는 변수의 값:%d\n", *ptr_a); //선언이랑은 다름 (a=*ptr_a) ptr이 가르키는 변수
	*/
	/* 예제 2번
	int a = 10;
	int b = 20;

	int* ptr;

	ptr = &a;
	printf("ptr이 가르키는 변수에 저장된 값: %d\n", *ptr);

	ptr = &b;
	printf("ptr이 가르키는 변수에 저장된 값: %d\n", *ptr);
	*/
	/*3번 예제
	int a =10;

	int* ptr;
	ptr = &a;
	printf("a의 값:%d\n", a);
	*ptr = 20;
	printf("a의 값:%d\n", a);
	*/

	int a = 10;

	int* ptr;
	ptr = &a;

	int** ptr_ptr; //포인터를 가르키는 포인터
	ptr_ptr = &ptr;

	printf("a=%d\n", a);
	printf("&a=%d\n", &a);

	printf("ptr=%d\n", ptr);
	printf("&ptr=%d\n", &ptr);

	printf("ptr_ptr=%d\n", **ptr_ptr);


}

