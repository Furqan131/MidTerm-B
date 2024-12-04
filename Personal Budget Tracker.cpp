#include<iostream>
using namespace std;
int main(){
	int choice, income=0, expenses=0, balance=0;
	
	do{
	
	cout<<"\n--Personal Budget Tracker--"<<endl;
	cout<<"1.Add Income"<<endl;
	cout<<"2.Add Expenses"<<endl;
	cout<<"3.View Balance"<<endl;
	cout<<"4.Exit"<<endl;
	cin>>choice;
	
	
	switch(choice){
		case 1:
			cout<<"Enter your Income: ";
			cin>>income;
			 if(income>0){
			 balance=balance+income;
		    }else{
		    
			cout<<"Invalid Input";
		}
			break;
		
		case 2:
			cout<<"Enter your Expenses: ";
			cin>>expenses;
			if(expenses>0){
			 balance=balance-expenses;
		}
			 else{
			 	cout<<"Invalid Input";
			 }
			break;
			
		case 3:
			cout<<"Your current balance is: "<<balance;
			break;
			
		case 4:
			break;
			
		default:
			cout<<"Invalid Input.";
			
	}
}
while(choice != 4);

return 0;
}
