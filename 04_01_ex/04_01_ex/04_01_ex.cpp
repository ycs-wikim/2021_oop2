// 04_01_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#define SWAP(a, b)	{ a ^= b; b ^= a; a ^= b; }


/// 예제 4-5의 함수
int Add(int a, int b)
{
	return a + b;
}


int main()
{
	int i = 0;
	/*
	for ( [1] ; [2] ; [3] )
	{
		[4];
	}

	/// 실행 순서
	[1] -> [2] -> [4] -> [3] -> [2] -> [4] -> ...
	* /
	for (i = 1; i < 15; i += 3)
	{
		printf("i : %d\n", i++);
	}
	*/
	/// for( ) 아무것도 입력하지 않아도 되나, 무한 반복 될 수 있는 조건이 발생하지 않도록 조심해야 한다.
	for ( ; ; )		/// 무한 반복 : while(1)
	{
		printf("i :: %d\n", i++);
		if (i > 16)
			break;
	}



/*
/// 예제 4-5
	int a = 1, b = 1;

	/// 평가식
	switch (Add(1, 2))
	{
		case 3:
			cout << "case 3 " << Add(a, b) << endl;
			break;
		case 0:
			cout << "case 0 " << Add(a, b) << endl;
			break;
		case 1:
			cout << "case 1 " << Add(a, b) << endl;
			break;
		case 2:
			cout << "case 2 " << Add(a, b) << endl;
			a = 3;
			b = 7;
			if (1)
				cout << Add(a, b) << endl;
			break;	/// endif == case 3:의 처리 범위 완료

		case 4:
			a = 30;
			b = 70;
			if (1)
				cout << Add(a, b) << endl;
	}


/*
/// 예제 4-3
	int a = 3;
	int b = 9;

	if (-98)
		SWAP(a, b);

	printf("a: %d - b: %d\n", a, b);

	/// 제어문
	/// 문장 형식
	/*
	if       ( a > b )
		/// if문은 바로 뒤의 한 문장만 인정
	KEYWORD  ( 조건식 )

	if( a > b )
		a = a + 1;
	else	// a <= b 경우. 즉, 조건식이 거짓일 때.
		/// else는 바로 뒤의 한 문장만 인정

	if( a > b )
	{
		a = a + 1;
////////////////////////////////////// endif

		b = b + 1;
	}
	else
	{
		a = a - 1;
		b = b - 1;
	}
	*/

/*
	int a = 165;
	char c = 0;
	float f = 0.0;
	int b[5] = { 3, 4, 5, };

	/// 형변환  : 명시적 - 프로그래머가 지정 ******
	///			: 묵시적 - 자동으로 변환되지만 사용하지 말것.
	/// char = int
	c = (char)a;		/// 가능 :: 1 = 4;
	f = (float)a;		/// 가능 :: 4 = 4;
	printf("%d\n", sizeof(float));
	printf("%d %c\n", c, c);
	printf("%d\n", 5 / 2);

	/*
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

