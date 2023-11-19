/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouhrir <obouhrir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 16:40:29 by obouhrir          #+#    #+#             */
/*   Updated: 2023/10/25 13:04:17 by obouhrir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

using std::endl;
using std::cout;

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << checkAmount() << ";created\n";
}

Account::~Account(void) {
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << checkAmount() << ";closed" << endl;
	_nbAccounts--;
}

int	Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int	Account::getTotalAmount(void) {
	return (_totalAmount);
}

int	Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp(void) {
	time_t curr_time;
	tm 	*curr_tm;
	char date_string[100];
	char time_string[100];

	time(&curr_time);
	curr_tm = localtime(&curr_time);

	strftime(date_string, 17, "%Y%d%m", curr_tm);
	strftime(time_string, 17, "_%H%M%S", curr_tm);
	cout << "[" << date_string <<time_string << "] ";
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	cout << "account:" << getNbAccounts() << ";";
	cout << "total:" << getTotalAmount() << ";";
	cout << "deposits:" << getNbDeposits() << ";";
	cout << "withdrawals:"<< getNbWithdrawals() << endl;
}

void	Account::makeDeposit(int deposit) {
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "p_amount:" << _amount - deposit << ";";
	cout << "deposit:" << deposit << ";";
	cout << "amount:" << _amount << ";";
	cout << "nb_deposits:" << _nbDeposits << endl;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_displayTimestamp();
	if (withdrawal <= _amount)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		cout << "index:" << _accountIndex << ";";
		cout << "p_amount:" << _amount + withdrawal << ";";
		cout << "withdrawal:" << withdrawal << ";";
		cout << "amount:" << _amount << ";";
		cout << "nb_withdrawals:" << _nbWithdrawals << endl;
		return (true);
	}
	else{
		cout << "index:" << _accountIndex << ";";
		cout << "p_amount:" << _amount << ";";
		cout << "withdrawal:refused" << endl;
	}
	return (false);
}

int		Account::checkAmount(void) const {
	return _amount;
}

void	Account::displayStatus(void) const {
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";";
	cout << "amount:" << _amount << ";";
	cout << "deposits:" << _nbDeposits << ";";
	cout << "withdrawals:" << _nbWithdrawals << endl;
}
