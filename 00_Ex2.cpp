/*============================================================
BaekJoon_02. ����
���� �׸��� ���� ���������� �̷���� ������ �ִ�. 
�׸����� ���� �ٿ� ���� �߾��� �� 1���� �����ؼ�
�̿��ϴ� �濡 ���ư��鼭 1�� �����ϴ� ��ȣ�� �ּҷ� �ű� �� �ִ�.
���� N�� �־����� ��, ������ �߾� 1���� N�� �����
�ּ� ������ ���� ������ �� �� �� ���� ���� ����������
(���۰� ���� �����Ͽ�)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

���� ���, 13������ 3��, 58������ 5���� ������.
*/

//Solution//
//*

#include <iostream>

int Solution(int _N);

int main()
{
	int N = 0;

	std::cin >> N;

	std::cout << Solution(N);

	return 0;
}

int Solution(int _N)
{
	/*/ 1��° Solution /*/

	/*
	int i_Start = 1;
	int i_End = 1;
	int i_Ans = 1;

	while (!(i_Start <= _N && i_End >= _N))
	{
		i_Start = i_End + 1;
		i_End = 6 * i_Ans + i_End;
		i_Ans++;
	}
	
	return i_Ans;
	//*/

	/*/ 2��° Solution /*/

	//*
	int i_Start = 1;
	int i_Ans = 1;

	while (_N > i_Start)
	{
		i_Start += (6 * i_Ans);
		i_Ans++;
	}

	return i_Ans;
	//*/


}
//*/