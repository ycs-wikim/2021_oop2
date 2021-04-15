// 04_15_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int function(int *a)		/// int *a = &x;
{
	int b = 5;
	printf("&a; %p\n", &a);
	printf("a : %p\n", a);
	printf("a : %d\n", *a);
	a = a + b;
	return b;		/// int
}

int main( )
{
	int x = 3;
	x = function(&x);
	printf("&x; %p\n", &x);
	printf("x: %d\n", x);

/*
void function(
	int *x			/// int* = int*
)
{
	int y = 5;
	printf("x: %p\n", x);
	printf("&x: %p\n", &x);
	printf("*x: %d\n", *x);
	printf("&y: %p\n", &y);

	*x = 123;
	//return x, y;		/// 문법적으로는 허용하나 실제 반환은 y만
	//return x + y;		/// int* + int
	//return y;
}

int main()
{
	int x = 7;
	printf("main x: %p\n", &x);
	function(&x);	/// 10
	printf("%d\n", x);
/* 일반적인 포인터의 예와 필요한 정보
	int a = 3;		/// 일반 변수의 선언
	int *p = &a;	/// 포인터 변수의 선언
	/// 포인터 변수의 선언
	/// 자료형 * 변수명;	-> int* p; int *p;
	/// 일반 정수형 변수 초기화 값 : 0, 포인터 변수의 초기화 값 : NULL (X) nullptr (O)
	int *ptr = nullptr;

	/// 포인터의 연산자
	/// * - 포인터가 가리키는 위치의 실물,메모리 값
	/// & - 변수의 주소를 반환하는 연산자
	/// 포인터에 주소 할당
	ptr = &a;

	/// a = 3;
	*ptr = 3;

	//printf("A*: %d\n", *a);
	printf("&A: %p\n", &a);			/// a의 실제 주소
	printf("A: %d\n", a);
	printf("PTR: %p\n", ptr);		/// a의 주소
	printf("PTR*: %d\n", *ptr);		/// ( *ptr == a ) a의 값이
	printf("PTR*: %d\n", &ptr);

/ *
	int* = [ int; -> int* ]
* /
	
	a = 5;
	printf("A-1: %d\n", a);

	*p = 10;
	printf("A-2: %d\n", a);

    std::cout << "Hello World!\n";
*/
}
