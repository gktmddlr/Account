#include "pch.h"
#include "../Project7/Account.cpp"

class AccountFixture : public testing::Test
{
public:
	Account account{ 10000 };
};

TEST_F(AccountFixture, CreateAccountInit10000won) {

	EXPECT_EQ(10000, account.getBalance());
}

TEST_F(AccountFixture, Deposit) {
	account.deposit(500);
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, Withdraw) {
	account.withdraw(600);
	EXPECT_EQ(9400, account.getBalance());
}

TEST_F(AccountFixture, Welfare5){
	account.welfare();
	EXPECT_EQ(10500, account.getBalance());
}

TEST_F(AccountFixture, SetInterest) {
	account.setInterest(10);
	EXPECT_EQ(10, account.getInterest());
}

TEST_F(AccountFixture, Welfare10) {
	account.setInterest(10);
	account.welfare();
	EXPECT_EQ(11000, account.getBalance());
}

TEST_F(AccountFixture, Welfare10After10Years) {
	account.setInterest(10);
	EXPECT_EQ(13310, account.getBalanceAfterYears(3));
}