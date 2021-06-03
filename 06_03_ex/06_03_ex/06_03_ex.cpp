// 06_03_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

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


int main()
{
	CB a;
	int i = 0;
	int *ptr = (int*)&a;
	a.~CB();

	for (; i < 3; i++)
	{
		printf("Member: %d %p\n", *(ptr + i), ptr + i);
	}
	printf("%p\n", &a);
	printf("%d %d \n", sizeof(CA), sizeof(CB));
    std::cout << "Hello World!\n";
}
