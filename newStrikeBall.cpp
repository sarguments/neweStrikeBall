#include "stdafx.h"

#include "logic.h"
#include "constVar.h"
//#include "logic.h"

int main()
{
	// 필요한것 : 랜덤숫자 저장, 입력숫자 저장, 스트라이크 저장, 볼 저장
	std::vector<int> randVector;
	std::vector<int> inputVector;

	Init(randVector, inputVector);

#if _DEBUG
	for (auto i : randVector) {
		std::wcout << i << std::endl;
	}

	std::wcout << L"Rand Loop Count : " << g_debug_int << std::endl;
#endif

	while (1) {
		int strike, ball = 0;

		InputUserNumProc(inputVector);
		strike = CheckStirke(randVector, inputVector);
		ball = CheckBall(randVector, inputVector);

		if (CheckResult(strike, ball)) break;
	}

	return 0;
}