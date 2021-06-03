// 06_03_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


class CTest
{
public:
	/// 디폴트 생성자
	CTest() : mv(3)
	{
		//mv = 78;
		m_value = 0;
	}

	/// 복사 생성자
	/// const를 붙이는 이유?
	/*
	CTest(const CTest& obj)
	{
		m_value = obj.m_value + 888;
	}
	*/
	const int mv;
	int m_value;
};

int main()
{
	/// 최초 인스턴스화
	CTest t;				/// m_value = 0
	t.m_value = 1;			/// m_value = 1

	/// 인스턴스로 초기화 --> 복사 생성자 호출
	CTest t1(t);			/// m_value = 2
	/// 할당/대입문으로 인스턴스 초기화 --> 복사 생성자 호출
	CTest t2 = t;			/// m_value = 2
	/// 단순 선언
	CTest t3;
	/// 할당/대입 수행
	t3 = t;					/// m_value = 1

	std::cout << "t1: " << t1.m_value << std::endl;
	std::cout << "t2: " << t2.m_value << std::endl;
	std::cout << "t3: " << t3.m_value << std::endl;
}


/*
class CParentA
{
public:
	int m_value;
	CParentA()
	{
		printf("%s [ %d ]\n", __FUNCTION__, m_value);
	}
	~CParentA()
	{
		m_value = 3;
		printf("%s [ %d ]\n", __FUNCTION__, m_value);
		m_value = 3333;
	}
	//static int mV;
};


int main()
{
	CParentA a;
}



/*
class CParentA
{
public:
	int m_value;
	//static int mV;
};

class CParentB
{
public:
	int m_value;
};

class CTest : public CParentA, public CParentB
{
public:
	int m_value;
};


int main()
{
	////////////////////////////////////////
	/// 동적 메모리 할당하여 처리
	CTest *ptr = new CTest;
	ptr->m_value = 3;
	
	ptr->m_value = 5;
	/// 동적 메모리 해제
	delete ptr;
	/// 이후로 ptr은 사용할 수 없음
	////////////////////////////////////////


	////////////////////////////////////////
	/// stack을 이용하여 처리
	CTest t;
	/// 동일한 이름을 사용할 경우, 클래스 범위 연산자를 통해 지정할 수 있다.
	t.CParentA::m_value = 1;
	//CParentA::mV = 1;	/// 정적 멤버는 인스턴스 소속이 아니다!
	t.CParentB::m_value = 2;
	t.m_value = 3;
	
	

	printf("%d %d %d\n", t.CParentA::m_value, t.CParentB::m_value, t.m_value);
}


/ *
class CA
{
public:
	int		m_pub;
	/// 생성자는 외부에서 불리기 때문에 반드시 권한 : public
	CA()
	{
		m_pub = 1;
		m_pro = 2;
		m_pri = 3;
		printf("%s Called\n", __FUNCTION__);
		printf("%p %p %p\n", &m_pub, &m_pro, &m_pri);
	}

	~CA()
	{
		printf("%s Called\n", __FUNCTION__);
	}
protected:
	int		m_pro;
private:
	int		m_pri;

};

class CB : public CA
{
public:
	CB()
	{
		printf("%s Called\n", __FUNCTION__);
	}

	~CB()
	{
		printf("%s Called\n", __FUNCTION__);
	}

};


void asdf(int *x, const char string[8], int y = 56)
{
	char *ptr = (char*)string;
	ptr[0] = '9';
	/// Black Box
}


int main()
{
	CB a;
	int i = 0;
	int *ptr = (int*)&a;
	char string[8] = "asdf";

	printf("Before : %s\n", string);
	asdf(&i, string);
	printf("After : %s\n", string);

	a.~CB();

	for (; i < 3; i++)
	{
		printf("Member: %d %p\n", *(ptr + i), ptr + i);
		*(ptr + i) = 999 + i;
	}

	for (i = 0; i < 3; i++)
	{
		printf("Member: %d %p\n", *(ptr + i), ptr + i);
	}

	printf("%p\n", &a);
	printf("%d %d \n", sizeof(CA), sizeof(CB));
    std::cout << "Hello World!\n";
}
*/