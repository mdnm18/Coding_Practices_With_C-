#include<iostream>
using namespace std;
class Product{
	private:
		int productID;
		string productName;
		double price;
		int quantity;
	
	public:
		Product(int productID,string productName,double price,int quantity){
			this->productID=productID;
			this->productName=productName;
			this-> price= price;
			this->quantity=quantity;
		}
		
		double TotalPrice(){
			return price*quantity;
		}
		
		void productDetails(){
			cout<<"PRODUCT ID : "<<productID<<endl;
			cout<<"PRODUCT NAME : "<<productName<<endl;
			cout<<"QUANTITY : "<<quantity<<endl;
			cout<<"TOTAL PRICE : "<< TotalPrice()<<endl;
		}
};

int main(){
	Product cart[3]{
		Product(02,"INFINIX INBOOK X1 LAPTOP",33000,5),
		Product(06,"iPAD 10TH GEN",40000,2),
		Product(17,"LAVA AGNI 2",14000,1)
	};
	
	for(int i=0; i<3;i++){
		cart[i].productDetails();
		cout<<"------------------------------------------"<<endl;
	}
	return 0;
}
