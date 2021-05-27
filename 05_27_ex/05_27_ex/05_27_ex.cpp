// 05_27_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class CTest
{
public:
	int m_I = 1;					/// 일반 멤버 : 즉시 초기화 가능

	const int m_CI = 2;				/// 상수 멤버 : 즉시 초기화 가능
									/// 실제로 일반 멤버와 동일(읽기 전용)

	static int s_I;					/// 정적 멤버 : 클래스 왜부에서 초기화 해야 함!

	static const int s_CI = 4;		/// 정적 상수 멤버 : #define으로 상수 선언과 동일

	double m_D = 1.1;
	const double m_CD = 2.2;
	static double s_D;
	static const double s_CD;
};

int CTest::s_I = 3;
double CTest::s_D = 3.3;
const double CTest::s_CD = 4.4;



/// 생성자와 소멸자
/// --> 함수로 구성, 다수개를 만들 수 있음
/// 생성자 : 인스턴스화 되는 시점에 자동으로 호출되는 함수
/// 소멸자 : 인스턴스가 메모리에서 해제되는 시점에 자동으로 호출되는 함수
/// 특별히 선언하지 않아도 문제가 없다!
/// 선언을 하지 않은 경우에는 컴파일러 자동으로 생성자/소멸자를 만들어서 넣어준다.

class ABC
{
public:
	int				m_x;
	static int		m_static;		/// 메모리에 적재가 되있는 상태. 공유 가능

	/// 인스턴스 간에 멤버 함수는 공유된다.
	void function()
	{

	}

	/// 클래스의 이름과 동일한 이름으로 생성되는 함수
	/// 함수의 반환 타입을 기록하지 않는다.
	ABC()
	{
		m_x = 3;
		printf("default 생성자 호출: %d\n", m_x);
	}

	ABC(int x)
	{
		m_x = x;
		printf("int 생성자 호출: %d\n", m_x);
	}

	/// 소멸자 : 한 클래스의 소멸자는 1개다.
	~ABC()
	{
		printf("소멸자 호출: %d\n", m_x);
	}
};


void func()
{

}

int main()
{
	ABC abc(7);
	ABC a;
	ABC b;
	ABC c;

	printf("%p\n", func);
	printf("abc : %p\n", &ABC::function);
	//printf("a : %p\n", &a.function);
	//printf("b : %p\n", &b.function);
	//printf("c : %p\n", &c.function);

    std::cout << "Hello World!\n";
}
