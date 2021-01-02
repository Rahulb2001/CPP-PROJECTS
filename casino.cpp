#include<iostream>
#include<conio.h>
using namespace std;
void rules();
int main(){
	char name[100];
	char choice; 
	int amt,bet,n;
	cout<<"Enter your name "<<endl;
	cin>>name;
	cout<<"Enter the Starting Amount "<<endl;
	cin>>amt;
	rules();
	system("cls");
	cout<<"Hey "<< name<<"\n your balance "<<amt<<"  Enter the Amount you Need to Bet "<<endl;
	do{	
	cout<<"Your Bet Amount should be less than balance  amount "<<endl;
	cin>>bet;
	if(bet<=amt){
		cout<<"Enter the Number from 1-10 "<<endl;
	cin>>n;
	}else{
		cout<<"Bet Amount is more than the balance amount"<<endl;
		break;
	}
	if(n%2==0){
		amt=amt+bet;
		cout<<"Congrats you won it ..!! \n the Balance amount is" <<amt;
	}else {
		amt=amt-bet;
		cout<<"oops..Better luck next time \n  balance amount is  "<<amt;	
	}
	cout<<"\nWould u like to continue Again(y\\n)"<<endl;
	cin>>choice;
	cout<<"\nbalance "<<amt<<endl;
	if(amt==0){
		cout<<"Sorry No !! Balance you Can't play Further' "<<endl;
        break;	
		 }else{
		 	continue;
	}	 }while(choice=='y' || choice =='Y');    
    return 0;
}
void rules(){
	cout << "\t\t======CASINO NUMBER GUESSING RULES!======\n";
    cout << "\t1. Choose a number between 1 to 10\n";
    cout << "\t2. Winner gets 10 times of the money bet\n";
    cout << "\t3. Wrong bet, and you lose the amount you bet\n\n";
}
