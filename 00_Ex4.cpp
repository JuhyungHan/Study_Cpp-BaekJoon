/*============================================================
BaekJoon_04. 달팽이는 올라가고 싶다

땅 위에 달팽이가 있다. 이 달팽이는 높이가 V미터인 나무 막대를 올라갈 것이다.
달팽이는 낮에 A미터 올라갈 수 있다. 하지만, 밤에 잠을 자는 동안 B미터 미끄러진다. 
또, 정상에 올라간 후에는 미끄러지지 않는다.
달팽이가 나무 막대를 모두 올라가려면, 며칠이 걸리는지 구하는 프로그램을 작성하시오.
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