#include<iostream>
#include<conio.h>
using namespace std;
class bank{
	private:int b;
		char name[100],add[100];
	    char y;
	public:void openac();
	void deposite();
	void withdraw();
	void balance();
	void display();
};
void bank::openac(){
	cout<<"Enter the Full name "<<endl;
    cin>>name;
	cout<<"Enter the Address "<<endl;
	cin>>add;
	cout<<"Enter the type of account u want to open Savings(s) or Current(c)"<<endl;
	cin>>y;
	cout<<"Deposite the Starting money to open the Account "<<endl;
	cin>>b;
}
void bank::display(){
	cout<<"Name:  "<<name<<endl;
	cout<<"Address:  "<<add<<endl;
	cout<<"Type of Account  "<<y<<endl;
	cout<<"Balance: "<<b<<endl;
}
void bank::deposite(){
	int d;
	cout<<"Enter the Amount to be Deposited "<<endl;
	cin>>d;
	b=b+d;
	cout<<"Balance ="<<b<<endl;
	
}
void bank::withdraw(){
	int w;
	cout<<"Enter the Amount to be withdrawn "<<endl;
	cin>>w;
	b=b-w;
	cout<<"Balance ="<<b<<endl;
	
}
void bank::balance(){
	cout<<"Balance:  "<<b<<endl;
}

int main(){
	while(1){
	bank obj;
	int o;
	cout<<"1.OPEN AN ACCOUNT"<<endl;
	cout<<"2.DEPOSITE MONEY"<<endl;
	cout<<"3.WITHDRAW MONEY"<<endl;
	cout<<"4.DISPLAY "<<endl;
	cout<<"5.BALANCE"<<endl;
	cout<<"6.EXIT"<<endl;
	cout<<"Select your option"<<endl;
	cin>>o;
	if(o==1){
	cout<<"Openeing a new account"<<endl;
	obj.openac();
	}else if(o==2){
		obj.deposite();
	}else if(o==3){
		obj.withdraw();
	}else if(o==4){
		obj.display();
	}else if(o==5){
	    obj.balance();
	}else if(o==6){
		exit(0);
	}}
return 0;	
}

