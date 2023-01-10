/*============================================================
BaekJoon_03. �м� ã��

�̿� ���� ������ �м����� 1/1 �� 1/2 �� 2/1 �� 3/1 �� 2/2 �� �� �� ����
������� ������ ���ʴ�� 1��, 2��, 3��, 4��, 5��, �� �м���� ����.

X�� �־����� ��, X��° �м��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
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