#include<iostream>
using namespace std;

class Account
{
	int id, balance;
	string name;
public:
	Account(string name, int id, int balance);
	string getOwner();// �̸� ����
	int deposit(int saving); //5���� ����
	int withdraw(int withdra);//���
	int inquiry();//�����ܾ�
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
int Account::deposit(int saving) // �ܾ� + �Ա�
{
	balance += saving;
	return balance;
}
int Account::withdraw(int withdra) //���
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
	cout << a.getOwner() << "�� �ܾ���" << a.inquiry() << endl;

	int money = a.withdraw(20000);
	cout<<a.getOwner()<< "�� �ܾ���" << a.inquiry() << endl;
}