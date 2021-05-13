#include <iostream>
using namespace std;

/// call-by-value ������
int sub(int x, int y)
{
	return x - y;
}

/// call-by-address ������
void sub(int x, int y, int *result)
{
	*result = x - y;
}

/// call-by-reference ������
void sub(int x, int y, int &result)
{
	result = x - y;
}

void sub_function()
{
	int a = 67;
	int b = 88;
	int result = 0;

	result = sub(a, b);
	std::cout << "Hello World!" << " result: " << result << endl;

	sub(a + 1, b + 1, &result);
	std::cout << "Hello World!" << " result: " << result << endl;

	sub(a + 10, b + 10, result);
	std::cout << "Hello World!" << " result: " << result << endl;
}