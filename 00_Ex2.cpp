/*============================================================
BaekJoon_02. 벌집
위의 그림과 같이 육각형으로 이루어진 벌집이 있다. 
그림에서 보는 바와 같이 중앙의 방 1부터 시작해서
이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다.
숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지
최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지
(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오. 

예를 들면, 13까지는 3개, 58까지는 5개를 지난다.
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
	/*/ 1번째 Solution /*/

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

	/*/ 2번째 Solution /*/

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