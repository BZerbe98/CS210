#include <iostream>
using namespace std;

#include "InvestmentData.h"

//sets initial investment
void InvestmentData::setInitialInvestment(double t_initialInvestment) { 
	this->m_initialInvestment = t_initialInvestment;
}

//sets monthly deposit
void InvestmentData::setMonthlyDeposit(double t_monthlyDeposit) { 
	this->m_monthlyDeposit = t_monthlyDeposit;
}

//sets annual interest
void InvestmentData::setAnnualInterest(double t_annualInterest) { 
	this->m_annualInterest = t_annualInterest;
}

//sets number of years
void InvestmentData::setNumOfYears(int t_numOfYears) { 
	this->m_numOfYears = t_numOfYears;
}

//calculates interest without deposits
double InvestmentData::calcInterestWithoutDeposits() { 
	return ((this->m_totalWithoutDeposits) * ((this->m_annualInterest / 100) / 12));
}

//calculates interest with deposits
double InvestmentData::calcInterestWithDeposits() { 
	return ((this->m_totalWithDeposits) * ((this->m_annualInterest / 100) / 12));
}

//sets total without deposits
void InvestmentData::setTotalWithoutDeposits(double t_amount) { 
	this->m_totalWithoutDeposits += t_amount;
}

//sets total with deposits
void InvestmentData::setTotalWithDeposits(double t_amount) { 
	this->m_totalWithDeposits += t_amount;
}

//gets total with deposits
double InvestmentData::getTotalWithDeposits() { 
	return this->m_totalWithDeposits;
}

//gets total without deposits
double InvestmentData::getTotalWithoutDeposits() { 
	return this->m_totalWithoutDeposits;
}