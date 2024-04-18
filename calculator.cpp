#include<iostream>
using namespace std;

int main(){
	
	int choice;
	float num1, num2;
	float result;
	
	cout<<"MENU:"<<endl;
	cout<<"1. Add"<<endl;
	cout<<"2. Subtract"<<endl;
	cout<<"3. Multiply"<<endl;
	cout<<"4. Divide"<<endl;
	cout<<"5. Exit\n"<<endl;
	
	do{
		
	cout<<"enter choice: "<<endl;
	cin>>choice;
	
	if(choice==5){
		cout<<"exiting the program..."<<endl;
		break;
	}
	
	cout<<"enter first number: "<<endl;
	cin>>num1;
	cout<<"enter second number: "<<endl;
	cin>>num2;
	
	
		switch(choice){
		
			case 1:{
			result = num1 + num2;
			cout<<"the result of addition is: "<<result<<endl;
			cout<<"\n"<<endl;
			break; 
			}
			case 2:{
			result = num1 - num2;
			cout<<"the result of subtraction is: "<<result<<endl;
			cout<<"\n"<<endl;
			break; 
			}
			case 3:{
			result = num1 * num2;
			cout<<"the result of multiplication is: "<<result<<endl;
			cout<<"\n"<<endl;
			break; 
			}
			case 4:{
			result = num1 / num2;
			cout<<"the result of division is: "<<result<<endl;
			cout<<"\n"<<endl;
			break; 
			}
			case 5:{
			cout<<"exiting the program..."<<endl;
			break; 
			}
			default: {
				cout<<"invalid input"<<endl;
				break;
			}
		}
	}
	while(choice != 5);
}
