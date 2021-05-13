#include <iostream>
using namespace std;

/// call-by-value
int mul_using_add(int a, int b)		/// 3, 5
{
	int i = 0;
	int result = 0;

	for (i = 0; i < a; i++)
		result = result + b;

	return result;
}

/// call-by-address
void mul_using_add(int a, int b, int *result)		/// 3, 5
{
	int i = 0;

	for (i = 0; i < a; i++)
		*result = *result + b;
}

/// call-by-ref
void mul_using_add(int a, int b, int &result)		/// 3, 5
{
	int i = 0;

	for (i = 0; i < a; i++)
		result = result + b;
}

void mul_add_function()
{
	int x = 7;
	int y = 90;
	int result = 0;
	result = mul_using_add(x, y);
	printf("%d\n", result);
	mul_using_add(x, y, &result);
	printf("%d\n", result);
	mul_using_add(x, y, result);
	printf("%d\n", result);
}
