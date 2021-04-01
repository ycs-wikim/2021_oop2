// 04_01_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

int main()
{
	int a = 23480;
	int b[5] = { 3, 4, 5, };

	/// sizeof 확인 --> 할당되어 있는 메모리의 크기를 반환
	printf("sizeof(int) : %d byte\n", sizeof(int));
	printf("sizeof(a) : %d byte\n", sizeof(a));
	printf("sizeof(b) : %d byte\n", sizeof(b));
	//printf("%d\n", sizeof());



	/// 3항 연산자
	/// ( 조건식 ) ? ___참___ : ___거짓___ ;
	(a > 10) ? printf("a>10\n") : printf("a !!!\n ");
/*
	printf("%d\n", ~0);
	printf("%d\n", !0);

	printf("!a = %d\n", !a);
	printf("!!a = %d\n", !!a);

	if (a == 1)
	{
		printf("a==1\n");
	}
	else
	{
		printf("a!=1\n");
	}
/*
/// 단항 연산자의 특징
	int a = 5;
	a++;	/// a = a + 1;  ==> 6
	printf("%d\n", a);
	printf("%d\n", ++a);	/// a ==> 7
	printf("%d\n", a++);	/// a ==> 8
	printf("%d\n", a);

	/// ++, -- 연산자의 특징 : 피연산자의 위치에 따라 값이 다를 수 있음
	/// ++a(a=a+1) : 가장 먼저 증가가 발생한다.
	/// a++(a=a+1) : 포함된 문장 실행 후에 증가가 발생한다.

	++a = 1;		/// OK		-> ++a( ( a = a + 1 )[ a ] = 1 )
	a++ = 1;		/// Error	-> a++( a = 1[l-value가 될 수 없음] = a + 1 )
*/

	cout << "Hello World!\n";
}

