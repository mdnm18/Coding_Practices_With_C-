#include<iostream>
using namespace std;
class Car{
	private:
		string brand;
		string model;
		double price;
		int year;
		static int totalCars;
	
	public:
		Car(string brand,string model,double price,int year){
			this->brand=brand;
			this->model=model;
			this->price=price;
			this->year=year;
			totalCars++;
		}
		
		void displayCarInfo(){
			cout<<"BRAND : "<<brand<<endl;
			cout<<"MODEL : "<<model<<endl;
			cout<<"PRICE : "<<price<<endl;
			cout<<"YEAR : "<<year<<endl;
		}
		
		static void displayTotalCars(){
			cout<<"TOTAL CARS IN INVENTORY : "<<totalCars<<endl;
		}
};
int Car::totalCars=0;

int main(){
	Car c1("BMW","X5 SUV",8800000,2022);
	Car c2("LAND ROVER","DEFENDER OCTA EDITION ONE",28500000,2025);
	
	c1.displayCarInfo();
	cout<<"----------------------------------------"<<endl;
	c2.displayCarInfo();
	cout<<"----------------------------------------"<<endl;
	Car::displayTotalCars();
	return 0;
}

