// stl.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
using namespace std;
/// STL (Standard Template Library)

// FL : 자료구조
#include <stack>
#include <queue>
#include <vector>


void main()
{
	int i = 0;
	vector<int> v;
	v.push_back(66);
	v.push_back(67);
	v.push_back(68);

	for (; i < v.size(); i++)
		printf("%d\n", v[i]);

	queue<char> q;
	q.push(65);
	q.push(66);
	q.push(67);
	printf("%c - %c\n", q.front(), q.back());
	q.pop();
	printf("%c - %c\n", q.front(), q.back());
	q.pop();
	printf("%c - %c\n", q.front(), q.back());
	q.pop();
	stack<int> st;
	st.push(3);
	st.push(89);
	st.push(2387);
	printf("%d \n", st.top());
	st.pop();
	printf("%d \n", st.top());
	st.pop();
	printf("%d \n", st.top());
	st.pop();
}

/*


//template <typename T1>


template <class T1, class T2>
T2 addValue1(T1 a, T2 b)
{
	return a + b;
}

/// 예약어 <class/typename 사용할대표이름>
template <class T1>
T1 addValue(T1 a, T1 b)
{
	cout << "A " << a << endl;
	cout << "B " << b << endl;

	return a + b;
}


int main()
{
	int i1 = 3, i2 = 5;
	float f1 = 3.3f, f2 = 6.6f;
	double d1 = 128.3, d2 = 11.2;
	char c1 = 33, c2 = 32;

	cout << addValue(i1, i2) << endl;
	cout << addValue(f1, f2) << endl;
	cout << addValue(d1, d2) << endl;
	cout << addValue(c1, c2) << endl;

	cout << addValue1(i1, c2) << endl;
	cout << addValue1(f1, i2) << endl;
	cout << addValue1(d1, c2) << endl;
	cout << addValue1(c1, i2) << endl;

    std::cout << "Hello World!\n";
}
*/
