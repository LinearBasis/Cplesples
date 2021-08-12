#include "Account.hpp"
#include <string>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(/* args */)
{
	this->_accountIndex = 0;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
}

static	std::string	get_time()
{
	time_t	now = time(0);
	tm		*time_now = localtime(&now);

	std::string	ans;

	ans += std::to_string(time_now->tm_year + 1900);
	if (time_now->tm_mon + 1 < 10)
		ans += '0';
	ans += std::to_string(time_now->tm_mon + 1);
	if (time_now->tm_mday + 1 < 10)
		ans += '0';
	ans += std::to_string(time_now->tm_mday);

	ans += "_";

	if (time_now->tm_hour < 10)
		ans += '0';
	ans += std::to_string(time_now->tm_hour);
	if (time_now->tm_min < 10)
		ans += '0';
	ans += std::to_string(time_now->tm_min);
	if (time_now->tm_sec < 10)
		ans += '0';
	ans += std::to_string(time_now->tm_sec);


	return (ans);
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_totalAmount += this->_amount;

	std::cout << "[" << get_time() << "]" << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account()
{
	Account::_nbAccounts--;

	std::cout << "[" << get_time() << "]" << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}


int		Account::getNbAccounts( void )
{
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void )
{
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void )
{
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void )
{
	return (Account::_totalNbWithdrawals);
}

//accounts:8;total:20049;deposits:0;withdrawals:0
void	Account::displayAccountsInfos( void )
{
	std::cout << "[" << get_time() << "] ";
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}


// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1	
void	Account::makeDeposit( int deposit )
{	
	std::cout << "[" << get_time() << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;

	this->_nbDeposits++;
	this->_amount += deposit;
	
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}


bool	Account::makeWithdrawal(int withdrawal)
{
	std::cout << "[" << get_time() << "] ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";

	if (this->_amount < withdrawal)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}

	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	this->_amount -= withdrawal;
	this->_nbWithdrawals++;

	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	return (true);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}
// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
void	Account::displayStatus( void ) const
{
	std::cout << "[" << get_time() << "] ";

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}
