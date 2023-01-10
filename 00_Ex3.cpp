/*============================================================
BaekJoon_03. 분수 찾기

이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은
지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.
*/

//Solution//
//*
#include <iostream>

void Solution(int _X);

int main()
{
	int X = 0;
	std::cin >> X;

	Solution(X);

	return 0;
}

void Solution(int _X)
{
	int i_Line = 1;
	int i_Cnt = _X;

	while (i_Cnt > i_Line)
	{
		i_Cnt = i_Cnt - i_Line;

		i_Line++;
	}

	if (i_Line % 2 == 0)
	{
		std::cout << i_Cnt << '/' << i_Line - i_Cnt + 1;
	}
	else
	{
		std::cout << i_Line - i_Cnt + 1 << '/' << i_Cnt;
	}
}

//*/