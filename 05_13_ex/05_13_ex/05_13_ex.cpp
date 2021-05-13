// 05_13_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


/// call-by-value : 함수 호출 시 값에 의한 호출 --> 전달된 값이 대입 연산과 동일

void AB(int x)			// 호출되는 시점 : int x = 3
{
	printf("%d\n", x);
}


/// call-by-address : 함수 호출 시 주소를 전달 --> 포인터의 주소 대입 연산
void CD(int *x)		/// int *x = &x
{
	printf("%d\n", *x);
}

/// call-by-reference : 함수 호출 시 변수를 전달
void EF(int &a)		/// int &a = y;
{
	printf("%d\n", a);
}

int main()
{
	int x = 3;
	int y = 0;

	y = x;		// x의 값을 복사하여 y 메모리 공간에 할당

	AB(3);		// 호출할 때 발생하는 내용 : 값의 복사
	CD(&x);		// 호출할 때 발생하는 내용 : 값의 복사
	EF(y);
	return 0;
}







/*
/// 함수의 원형
//// -> 컴파일러는 자료형에만 관심이 있다. 변수명은 관심에 대상이 아니다.
//void AB(int x, int y, int z);
//void AB(int, int, int);
void AB(int a, int b, int c);

int main()
{
	AB(3, 4, 5);
    std::cout << "Hello World!\n";
}

void AB(int x, int y, int z)
{

}
*/