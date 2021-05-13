#include <iostream>
using namespace std;

/// call-by-value ������
int add(int x, int y)
{
	return x + y;
}

/// call-by-address ������
void add(int x, int y, int *result)
{
	*result = x + y;
}

/// call-by-reference ������
void add(int x, int y, int &result)
{
	result = x + y;
}

void add_function()
{
	int a = 67;
	int b = 88;
	int result = 0;

	result = add(a, b);
	std::cout << "Hello World!" << " result: " << result << endl;

	add(a + 1, b + 1, &result);
	std::cout << "Hello World!" << " result: " << result << endl;

	add(a + 10, b + 10, result);
	std::cout << "Hello World!" << " result: " << result << endl;
}
