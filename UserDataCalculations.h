#pragma once
#ifndef AIRGEADBANKING_USERDATACALCULATIONS_H_
#define AIRGEADBANKING_USERDATACALCULATIONS_H_
#endif 

#include "InvestmentData.h"

class UserDataCalculations {
	
public:
	void dataWithoutDeposits(InvestmentData t_userInvestment);
	void dataWithDeposits(InvestmentData t_userInvestment);

};