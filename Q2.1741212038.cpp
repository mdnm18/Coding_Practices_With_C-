#include<iostream>
using namespace std;
class Student{
	private:
		int studentID;
		string name;
		int marks[5];
		
	public:
		Student(int studentID, string name,int marks[5]){
			this->studentID=studentID;
			this->name=name;
			for(int i=0; i<5; i++){
				this->marks[i]=marks[i];
			}
		}
		
		double calculateAverage(){
			int sum=0;
			for(int i=0; i<5; i++){
				sum+=marks[i];
			}
			return sum/5.0;
		}
		
		void displayDetails(){
			cout<<"STUDENT ID : "<<studentID<<endl;
			cout<<"NAME OF THE STUDENT : "<<name<<endl;
			cout<<"AVERAGE MARK : "<<calculateAverage()<<endl;
		}
		
		void RegisterNoDisplay(){
			cout<<"RA2411003011072";
		}
};

int main(){
	int m1[5]={34,45,67,55,22};
	int m2[5]={45,90,99,89,11};
	Student s1(18,"VIRAT",m1);
	Student s2(45,"ROHIT",m2);
	s1.displayDetails();
	s2.displayDetails();
	s1.RegisterNoDisplay();
	return 0;
}