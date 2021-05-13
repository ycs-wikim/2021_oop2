// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdlib.h>		// 랜덤
#include <time.h>		// 랜덤 시드 설정
using namespace std;


int main()
{
	int i = 0;
	int user = 0;
	int com = 0;
	int result = 0;		/// 1 사용자, 2 컴퓨터, 3 비김

	srand((unsigned int)time(NULL));
	user = 1;

	for (; i < 15; i++)
	{
		com = rand() % 3 + 1;			/// 1, 2, 3

		if (com == 1)
			result = 3;
		else if (com == 2)
			result = 2;
		else if (com == 3)
			result = 1;

		printf("RESULT: %d\n", result);
		printf("user[ %d ] computer[ %d ]\n", user, com);
	}
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
