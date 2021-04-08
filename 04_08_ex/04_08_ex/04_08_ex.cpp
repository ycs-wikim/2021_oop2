// 04_08_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

#define Add(a,b)	a+b


int main()
{
	/// 1. 4단 까지만 출력하고 싶다.

	/// 예제 4-13 : 다중 반복 (반복문 안에 반복문)
	for (int i = 2; i < 10; i++)
	{
		/// 7단 이후만 출력하고 싶을 때
		if( i <= 6 )
			continue;		/// 반복문의 시작으로 보낸다. 나를 포함한 가장 가까운 반복문의 시작으로
		/// 첫번째로 이 위치에 왔을 때 i = 2, 3
		for (int j = 1; j < 10; j++)
		{
			
			/// 첫번째로 이 위치에 왔을 때, i = 2, j = 1, 2, 3, ... 9
			/// 현재 i, j 값 그리고 둘을 곱한값
			cout << i << " * " << j << " = " << i * j << endl;
		}
		/// 4단 까지만 출력하고 싶을 때
		if( i == 4)
			break;		/// 반복문을 빠져 나간다. 나를 포함한 가장 가까운 반복문
		cout << endl;	/// 한줄 출력
		/// i = 2
	}
	//// break된 위치
/*
	/// Ex) 4-10
	int Sum = 0;
	int i = 0;	/// 초기값

	/// for : 반복이 주목적
	/// while : 무한 반복 주목적
	///	while(1) == for(;;)

	/// do ~ while : 처리 조건 확인 주목적
	do
	{
		if (Add(3, 5) > 10)
			break;
		cout << "1" << endl;
		if (Add(4, 5) > 10)
			break;
		cout << "2" << endl;
		if (Add(11, 5) > 10)
			break;
		cout << "3" << endl;
	} while (0);

	/// 관계 연산자 '<'에 대해 NOT하면 --> >=
	while( i <= 10 )		/// 조건식
	{
		Sum += i;
		i++;			/// 증감식
	}
	cout << "SUM : " << Sum << endl;

	//i = 0;		// 초기값 -> i == 11
	//Sum = 0;
	/// for( 초기값 ; 조건식; 증감식 )
	//for (; ; )
	for( i = 0, Sum = 0; i <= 10; i++ )
	{
		Sum += i;		/// --> 66
/*
		i++;			/// 증감식

		if (i > 10)		/// 조건식
			break;
* /
	}
	cout << "SUM : " << Sum << endl;	/// -> 66

	/// while, for 특징 --> 조건이 만족되지 않으면 한번도 실행되지 않을 수 있다.
	/// do ~ while 특징 --> 반복될 문장이 반드시 한번은 실행된다!
	//i = 0;			/// --> 현재 i == 11
	//Sum = 0;			/// 초기식
	do
	{
		Sum += i;		/// 반복될 문장
		i++;			/// 증감식
	} while (i <= 10);	/// 조건식
	cout << "SUM : " << Sum << endl;
	cout << "i : " << i<< endl;

    cout << "Hello World!\n";
*/
}
