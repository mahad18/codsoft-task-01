#include <iostream>
#include <vector>
#include <string>

using namespace std;

	struct Task{
		string description;
		bool completed;
	};
	
	class List{
	private:
	vector<Task> tasks;
	
	public: 
	
	void addTask(const string& description){
		Task newTask;
		newTask.description = description;
		newTask.completed = false;
		tasks.push_back(newTask);
		cout<<"task added successfully/n"<<endl;
	}
	
	void viewTask(){
		if(tasks.empty()){
			cout<<"no tasks are present at the moment. choose 1 to add a task"<<endl;
		}
		else{
			cout<<"tasks: "<<"/n"<<endl;
				for(int i=0; i<tasks.size(); i++){
				cout<<i+1<<"."<<" "<<tasks[i].description<<" -"<<endl;
					if(tasks[i].completed){
				cout<<" completed\n"<<endl;
					}
					else{
				cout<<" incomplete\n"<<endl;
					}
				}
			}
		}
		
	void taskComplete(int index){
		if(index >= 1 && index <= tasks.size()){
			tasks[index-1].completed = true;
			cout<<"task"<< index-1 <<" marked as completed\n"<<endl; 
		}
		else{
			cout<<"invalid index\n"<<endl;
		}
	}
	
	void removeTask(int index){
		if(index >= 1 && index <= tasks.size()){
			tasks.erase(tasks.begin() + index - 1); //tasks.begin() provides an iterator to traverse through elements in the vector
			cout<<"task removed successfully\n"<<endl;
		}
		else{
			cout<<"invalid index\n"<<endl;
		}
	}
};
	
	int main(){
		List list;
		
		char choice;
		
	do{
		cout<<"MENU: \n"<<endl;
		cout<<"1. Add Task"<<endl;
		cout<<"2. View Task"<<endl;
		cout<<"3. Mark Task as Complete"<<endl;
		cout<<"4. Remove Task"<<endl;
		cout<<"5. Exit"<<endl;
		cin>>choice;
		
		switch(choice){
			case '1':{
				string description;
				cout<<"enter the task description you want to add: "<<endl;
				cin.ignore();
				getline(cin, description) ;
				list.addTask(description); //this description is being passed to addtask
				break;
			}
			
			case '2':{
				list.viewTask();
				break;
			}
			
			case '3':{
				int index;
				cout<<"enter the index number you want to mark as complete: "<<endl;
				cin>>index;
				list.taskComplete(index);
				break;
			}
			
			case '4':{
				int index;
				cout<<"enter the index number which you want to remove: "<<endl;
				cin>>index;
				list.removeTask(index);
				break;	
			}
			
			case '5':{
				cout<<"Exiting the program... "<<endl;
				break;	
			}
			
			default:{
				cout<<"Invalid choice. choose between 1 to 5"<<endl;
				break;
			}
		}
	}
			while (choice != 5);
			return 0;
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

