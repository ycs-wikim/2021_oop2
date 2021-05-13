#include <iostream>
using namespace std;

/// call-by-value
int div_using_sub(int a, int b)		/// 15 / 7
{
	int i = 0;
	int cnt = 0;

	for (; ; )
	{
		a = a - b;		/// 15 - 7 = 8
		
		if (a <= 0)
			break;
		cnt++;
	}

	return cnt;
}


void div_sub_function()
{
	int x = 78;
	int y = 38;
	int result = 0;

	result = div_using_sub(x, y);
	printf("sub : %d\n", result);
}