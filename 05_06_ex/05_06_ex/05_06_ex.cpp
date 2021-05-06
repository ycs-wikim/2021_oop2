// 05_06_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

/// typedef : 자료형의 정의 
/// typedef A B;	---> 앞으로 A는 B로 사용한다.
typedef
/// A : 구조체명에 설명을 입력하면 나중에 확인이 쉽다.
struct example_for_5_6_oop_2_class
{
	int			x;
	int			y;
	int			z;
}
/// B : 대부분 모두 대문자로 사용
INT;

int main()
{
	INT c;
	c.x = 10;
	c.y = 20;
	c.z = 30;
	printf("%d %d %d\n", c.x, c.y, c.z);
}


/*
/// * 구조체의 사용 이유 : 다른 자료형을 하나의 자료형으로 사용하고자 할때
/// 선언 : 예약어 구조체명 { 구조체 멤버 리스트; ... };
struct example
{
	int				x;
	int				y;
	int				z;
};

int main()
{
	/// 구조체의 사용 : 예약어 구조체명 사용할변수명(구조체의대표이름)
	struct example ex;
	int *p = (int*)&ex;
	/// *구조체 멤버의 접근
	ex.x = 10;
	ex.y = 20;
	ex.z = 30;

	printf("%d %d %d\n", ex.x, ex.y, ex.z);
	printf("%d %d %d\n", *p, *(p + 1), *(p + 2));
	*p = 3;
	*(p + 1) = 5;
	*(p + 2) = 8;
	printf("%d %d %d\n", ex.x, ex.y, ex.z);
    std::cout << "Hello World!\n";
}
*/