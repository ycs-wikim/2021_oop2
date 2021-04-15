// 04_15_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
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

/*
	int* = [ int; -> int* ]
*/
	
	a = 5;
	printf("A-1: %d\n", a);

	*p = 10;
	printf("A-2: %d\n", a);

    std::cout << "Hello World!\n";
}
