// 06_10_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

class CTest
{
public:
	CTest()
	{
		cout << "Contructor!" << endl;
	}
};

void main()
{
	cout << "<malloc>" << endl;
	CTest *pT1 = (CTest*)malloc(sizeof(CTest));
	free(pT1);

	cout << "<new>" << endl;
	CTest *pT2 = new CTest;
	delete pT2;
}

/*
class CTest
{
/// 외부에서 누구나 나의 private, protected 멤버 접근 가능!
	/// 클래스를 friend로 선언
	friend class CChild;		/// CChild 클래스는 나의 친구~
	/// 함수를 friend로 선언
	friend void main();

/// 어디서나 누구나 인스턴스를 생성하면 접근 가능
public:
	void Func()
	{
		m_Public++;
		m_Protected++;
		m_Private++;
	}

	int m_Public = 1;
/// 특수한 관계(상속)인 경우 사용이 가능
protected:
	int m_Protected = 2;
/// 자신만 사용할 수 있다!!!!
private:
	int m_Private = 3;
};

class CChild : public CTest
{
	/// CChild --> 멤버 변수가 선언되지 않음
public:
	void Func()
	{
		m_Public++;		/// 부모의 public 멤버 접근
		m_Protected++;	/// 부모의 protected 멤버 접근 가능! -> 관계가 있으니까!
		m_Private++;	/// 부모의 private 멤버 접근 불가!
	}
};

void main()
{
	CTest t;
	t.m_Public++;		/// public 멤버 접근 가능
	t.m_Protected++;	/// protected 멤버 접근 불가!
	t.m_Private++;		/// private 멤버 접근 불가!
}
*/

/*
class CTest
{
public:
	/// 연산자를 오버로딩
	/// 선언 : 클래스이름 operator(연산자,예약어) 연산자 ( 인수 )
	CTest operator + (int arg)
	{
		/// 동일한 클래스의 인스턴스 생성
		CTest t;
		/// 생성한 인스턴스의 멤버에 전달된 숫자 값을 더함
		t.m_Value = m_Value + arg;
		return t;
	}

	CTest operator + (const CTest& arg);

	int m_Value;
};


CTest CTest::operator+ (const CTest& arg)
{
	CTest t;
			/// t1 (1) + t2 (2)
	t.m_Value = m_Value + arg.m_Value;
	return t;
}

int main()
{
	CTest t1;
	t1.m_Value = 1;

	CTest t2;
	t2.m_Value = 2;

	CTest s = t1 + t2 + 3 + t1;
	/// 연산자의 주인은 선행하는 피연산자
	//CTest k = 3 + t1;		/// 허용되지 않음

	///        t.m_Value(3)
	///연산결과  t + 3; --> 3 + 3
	///연산결과  t
	/// CTest s = t;		// s.m_Value = 6

	cout << s.m_Value << endl;
    std::cout << "Hello World!\n";
}
*/