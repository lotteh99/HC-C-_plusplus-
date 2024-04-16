#include<iostream>
using namespace std;

class Account
{
	int id, balance;
	string name;
public:
	Account(string name, int id, int balance);
	string getOwner();// 이름 저장
	int deposit(int saving); //5만원 저금
	int withdraw(int withdra);//출금
	int inquiry();//남은잔액
};


Account::Account(string name, int id, int balance)
{
	this->name = name;
	this->id = id;
	this->balance = balance;
}

string Account::getOwner()
{
	return name;
}
int Account::deposit(int saving) // 잔액 + 입금
{
	balance += saving;
	return balance;
}
int Account::withdraw(int withdra) //출금
{
	balance -= withdra;
	return withdra;
}
int Account::inquiry()
{
	return balance;
}

int main()
{
	Account a("kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "의 잔액은" << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout<<a.getOwner()<< "의 잔액은" << a.inquiry() << endl;
}