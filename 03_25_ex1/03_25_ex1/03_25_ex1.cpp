// 03_25_ex1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// 매크로 정의 : #define(keyword) A B 로 선언한다.
/// --> 앞으로 A를 쓰면 B로 치환된다.
///     A   B
#define PI	3.141592
/// 선언된 PI는 어디서나 사용 가능


///     A           B
#define SUM(a,b)	a+b

/// #ifdef : 만약 선언되어 있다면
/// #ifndef : 만약 선언이 안되어 있다면
/// #else : else
/// #endif : #ifdef의 마지막 위치임을 알림
/// 

//#define OOP2

class CPerson
{
public:
	/// 수정
	char m_Name[ 16 ];
	int m_Age;

	/// 함수를 선언해서 사용할 수 있다.
	void print()
	{
		cout << "Name: " << m_Name << endl;
		cout << "Age: " << m_Age << endl;
	}
};



int main()
{
	/// const -> 변수의 상수화. 초기화 시에 반드시 값을 주어야 한다.
	int x = 3;
	int const i = 10;
	printf("i: %d\n", i);
	//i = 10;

	/// 변수의 유효 범위 -> 선언된 위치에 따라 다름

	/*
	/// 포인터 변수는 선언할 때 반드시 앞에 * 붙는다.
	int a = 3;
	/// 변수의 주소를 알 수 있는 방법 : 주소 연산자
	/// 포인터 --> 주소 값만 사용이 가능
	int *b;

	b = &a;
	printf("A : %d %p\n", a, &a);
	printf("B : %p %p\n", b, &b);



	CPerson p[2];

	/// = 등호를 기준으로 왼쪽은 l-value라 부르고,
	/// 오른쪽은 r-value라 부릅니다.
	/// l-value : 변수
	/// r-value : 모두(변수, 상수, 매크로, 함수 ... )
	//p[0].m_Name = "Kim Do Hyung";
	memcpy(p[0].m_Name, "Kim Do Hyung", strlen("Kim Do Hyung"));
	p[0].m_Name[12] = '\0';
	p[0].m_Age = 11;
	p[0].print();

	//p[1].m_Name = "Kim Na In";
	memcpy(p[1].m_Name, "Kim Na In", strlen("Kim Na In"));
	p[1].m_Name[9] = '\0';
	p[1].m_Age = 9;
	p[1].print();

	char str[] = "대한민국";
	int length = sizeof(str);
	printf("%s %d\n", str, length);

	wchar_t wstr[] = L"대한민국";
	int wlength = sizeof(wstr);
	wcout << str << wlength << endl;

	int i = 0;
	char A = 'A';
	char B = 66;
	/// char : ASCii 형식이므로 1byte의 공간을 사용
	char C[ ] = "ab";
	/// Unicode 형식으로 2byte의 공간을 사용
	/// Unicode으로 문자열을 초기화/사용할 때는 앞에 L (대문자 L)을 반드시 붙여야 함
	wchar_t D[] = L"AB";
	
	printf("%s\n", C);
	/// 일반적인 방법으로 Unicode를 출력하지 못함 -> 메모리의 구조 때문
	/// 2byte 사용시 A \0 B \0 형태로 입력되기 때문
	printf("%s\n", D);

	printf("%d[ %c ] %d[ %c ]\n", A, A, B, B);

	for (; i < 128; i++)
	{
		printf("%d ] %c\n", i, i);
	}



	cout << __FILE__ << endl;
	cout << __LINE__ << endl;
	cout << __FUNCTION__ << endl;

#ifndef OOP2
	/// 조건의 참
    cout << "Hello " << PI << " World!\n";
#else
	/// 조건의 거짓
	cout << "Hello " << SUM(3,5) << " computer!\n";
#endif
*/
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
