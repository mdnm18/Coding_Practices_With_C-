#include<iostream>
using namespace std;
class BankAccount{
	private:
		int accountNumber;
		string accountHolderName;
		double balance;
	
	public:
		BankAccount(int accountNumber, string accountHolderName, double balance){
			this->accountNumber=accountNumber;
			this->accountHolderName=accountHolderName;
			this->balance=balance;
		}
		
		void deposit(double amount){
			balance+=amount;
			cout<<"THE DEPOSITE AMOUNT : "<<amount<<endl;
		}
		void withdraw(double amount){
			if(balance<amount){
				cout<<"INSUFFICIENT BALANCE!";
			}else{
				balance-=amount;
				cout<<"THE WITHDRAW AMOUNT : "<<amount<<endl;	
			}
		}
		void display(){
			cout<<"YOUR AC NUMBER : "<<accountNumber<<endl;
			cout<<"YOUR AC HOLDER NAME : "<<accountHolderName<<endl;
			cout<<"YOUR REMAINING BALANCE : "<<balance<<endl;
		}
		void RegisterNoDisplay(){
			cout<<"RA2411003011072";
		}
};

int main(){
	BankAccount b1(78634,"NAYAJ",10000);
	b1.display();
	b1.deposit(2000);
	b1.withdraw(5000);
	b1.display();
	b1.RegisterNoDisplay();
	return 0;
}