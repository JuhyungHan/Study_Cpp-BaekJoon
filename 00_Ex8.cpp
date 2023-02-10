/*============================================================
BaekJoon_08. 큰 수 A + B
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.
*/

//Solution//
//*
#include <iostream>

void Solution();

int main()
{
	Solution();

	return 0;
}

void Solution()
{
	std::string s_A;
	std::string s_B;

	std::cin >> s_A >> s_B;

	if (s_A.size() < s_B.size())
	{
		swap(s_A, s_B);
	}

	int i_Carry = 0;

	std::string s_Ans;

	for (int i = 1; i <= s_A.size(); ++i)
	{
		int i_A = s_A.size() - i;
		int i_B = s_B.size() - i;

		char c_A = s_A[i_A];
		char c_B = (i_B < 0 ? '0' : s_B[i_B]);

		int i_Num = (c_A - '0') + (c_B - '0') + i_Carry;
		i_Carry = (10 <= i_Num) ? i_Num / 10 : 0;

		char c_Remain = (i_Num % 10) + '0';
		s_Ans = c_Remain + s_Ans;
	}

	if (i_Carry)
	{
		s_Ans = char(i_Carry + '0') + s_Ans;
	}

	std::cout << s_Ans;
}

//*/