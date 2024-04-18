#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	srand(time(NULL));
	
	int num;
	int attempts = 0;
	int randomNum = rand()%101;
	
	
	while(num != randomNum){
	  
	attempts++;  
	cout<<"guess the number: "<<endl;
	cin>>num;
	
	if(num > randomNum){
	cout<<"too high"<<endl;
	}
	else if(num == randomNum){
		cout<<"Congratulations you guessed the number correctly"<<endl;
		break;
	}
	else{
		cout<<"too low"<<endl;
	}
}
	if(attempts > 1){
	cout<<"the number of attempts you took were: "<<attempts<<endl;
	}
	else{
		cout<<"YOU ARE A PSYCHIC! You only took 1 attempt to guess the number."<<endl;
	}
	return 0;
}
