// 05_20_ex.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

struct sasdf
{
	/// C++ 구조체에서 권한을 설정하지 않은 경우 : public
	int y;
protected:
	int x;
public:
	void asdf()
	{
		printf("ASDF!!!!\n");
	}
};

/// 클래스의 선언 : 예약어 클래스 이름 {
/// Vs. JAVA : 클래스에 권한을 지정할 수 없다.
// public class CFamily : X
/// 클래스 선언 시 이름 앞에 'C' 접두어를 붙인다.
class CFamily
{
	/// 클래스에서 권한을 설정하지 않은 경우 : private
	int x;
/// 권한: private(나만), protected(관계가 있는 경우), public(누구나)
/// 권한 사용 개수: 제한 없음
/// 다른 권한이 나타날 때까지 먼서 선언된 권한이 지속적으로 유지
protected:
	/// 멤버 변수 -> 구조체의 변수 선언과 동일
	char*		m_FamilyName;

public:
	/// 멤버 함수 -> 구조체의 함수 포인터를 이용한 함수 추가
	void SetFasmilyName(char* arg)
	{
		m_FamilyName = arg;
	}
};

/// CName : 상속을 받는 클래스
/// CFamily : 상속되는 클래스
/// C++ 에서는 상속될 클래스를 ':' 뒤에 나열하는 것으로 상속이 발생 + 권한
/// 상속 시 권한 변경
/*
	부모		권한		상속
	private		private		private
	protected				private
	public					private

	private		protected	private
	protected				protected
	public					protected

	private		public		private
	protected				protected
	public					public
*/
class CName : public CFamily
{
private:
	char*		m_Name;

public:
	void SetName(char* arg);

	void ShowName()
	{
		cout << m_FamilyName << " " << m_Name << endl;
	}
};

/// 멤버 함수를 클래스 선언 외부에서 선언하는 경우
/// 원래 함수 원형을 그대로 가져온다.
/// 어떤 클래스의 외부 함수 선언인지 알려줘야 함!!!
/// --> 클래스 이름::(범위 연산자)
void CName::SetName(char* arg)
{
	m_Name = arg;
}

int main()
{
	struct sasdf a;
	CName name;
	char fname[6] = "KIM";
	char lname[8] = "Won iL";

	
	CName::CFamily::
	a.asdf();
	a.y;

	name.SetFasmilyName(fname);
	name.SetName(lname);
	name.ShowName();
    std::cout << "Hello World!\n";
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
