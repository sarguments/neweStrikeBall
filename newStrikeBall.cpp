#include "stdafx.h"

#include "logic.h"
#include "constVar.h"
//#include "logic.h"

// TODO : 헤더 순서?

int main()
{
	// 필요한것 : 랜덤숫자 저장, 입력숫자 저장, 스트라이크 저장, 볼 저장
	std::vector<int> randVector;
	std::vector<int> inputVector;

	Init(randVector, inputVector);

	while (1) {
		int strike, ball = 0;

		InputUserNumProc(inputVector);
		strike = CheckStirke(randVector, inputVector);
		ball = CheckBall(randVector, inputVector);

		if (CheckResult(strike, ball)) break;
	}

	return 0;
}