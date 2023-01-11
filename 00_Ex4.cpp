/*============================================================
BaekJoon_04. �����̴� �ö󰡰� �ʹ�

�� ���� �����̰� �ִ�. �� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.
�����̴� ���� A���� �ö� �� �ִ�. ������, �㿡 ���� �ڴ� ���� B���� �̲�������. 
��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.
�����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

//Solution//
//*
#include <iostream>

int Solution(int _A, int _B, int _V);

int main()
{
	int A = 0;
	int B = 0;
	int V = 0;
	std::cin >> A >> B >> V;

	std::cout << Solution(A, B, V);

	return 0;
}

int Solution(int _A, int _B, int _V)
{
	int i_Ans = 0;
	
	if ((_V - _A) % (_A - _B) == 0)
	{
		i_Ans = (_V - _A) / (_A - _B) + 1;
	}
	else if(_V - _A == 0)
	{
		i_Ans = 1;
	}
	else
	{
		i_Ans = (_V - _A) / (_A - _B) + 2;
	}

	return i_Ans;
}

//*/