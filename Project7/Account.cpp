class Account
{
public:
	explicit Account(int money)
		: balance(money)
	{
	}
	int getBalance()
	{
		return balance;
	}
	void deposit(int money)
	{
		balance += money;
	}
	void withdraw(int money)
	{
		balance -= money;
	}
	void welfare()
	{
		balance = (balance * (1 + interest_ / 100));
	}
	void setInterest(double interest)
	{
		interest_ = interest;
	}
	int getInterest()
	{
		return static_cast<int>(interest_);
	}
	int getBalanceAfterYears(int n)
	{
		int predict = balance;
		for(int i = 0; i < n; i++)
		{
			predict = (predict * (1 + interest_ / 100));
		}
		return predict;
	}
private:
	double interest_ = 5;
	int balance = 0;
};