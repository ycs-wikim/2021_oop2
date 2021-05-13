// 05_13_report.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;

/// 규칙 1. 반환 값이 계산 결과가 되어야 한다.
/// 규칙 2. 모두 정수형만을 사용한다.

void add_function();
void sub_function();
void mul_function();
void div_function();
void mul_add_function();
void div_sub_function();
void moduler_function();

int main()
{
	add_function();
	sub_function();

	mul_add_function();
	div_sub_function();
}
