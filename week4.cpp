#include <iostream>
#include <vector>
using namespace std;

// 1. Library Management System
class Book {
public:
    int bookID;
    string title, author;
    double price;

    Book() : bookID(0), title("Unknown"), author("Unknown"), price(0.0) {}
    Book(int id, string t, string a, double p) : bookID(id), title(t), author(a), price(p) {}
    void displayBookInfo() {
        cout << "Book ID: " << bookID << ", Title: " << title << ", Author: " << author << ", Price: " << price << endl;
    }
};

// 2. Online Shopping System
class Product {
public:
    int productID;
    string productName;
    double price;
    int quantity;

    Product() : productID(0), productName("Unknown"), price(0.0), quantity(0) {}
    Product(int id, string name, double p, int q) : productID(id), productName(name), price(p), quantity(q) {}
    double calculateTotalPrice() const { return price * quantity; }
    ~Product() { cout << "Product " << productName << " removed from cart." << endl; }
};

void displayCart(vector<Product> &cart) {
    for (const auto &p : cart)
        cout << "Product ID: " << p.productID << ", Name: " << p.productName << ", Price: " << p.price << ", Quantity: " << p.quantity << ", Total: " << p.calculateTotalPrice() << endl;
}

// 3. Theatre Ticket Booking System
class MovieTicket {
public:
    string movieName;
    int seatNumber;
    double price;
    bool isBooked;

    MovieTicket(string name, int seat, double p) : movieName(name), seatNumber(seat), price(p), isBooked(false) {}
    void bookTicket() {
        if (!isBooked) {
            isBooked = true;
            cout << "Ticket booked for " << movieName << " at seat " << seatNumber << endl;
        } else {
            cout << "Seat already booked!" << endl;
        }
    }
    void cancelTicket() {
        if (isBooked) {
            isBooked = false;
            cout << "Ticket cancelled for seat " << seatNumber << endl;
        } else {
            cout << "Ticket not booked yet!" << endl;
        }
    }
    void displayTicketDetails() {
        cout << "Movie: " << movieName << ", Seat: " << seatNumber << ", Price: " << price << ", Status: " << (isBooked ? "Booked" : "Available") << endl;
    }
    ~MovieTicket() {
        cout << "Ticket for seat " << seatNumber << " deleted." << endl;
    }
};

// 4. Employee Management System
class Employee {
public:
    int empID;
    string name;
    double salary;
    string designation;

    Employee(int id, string n, double s, string d) : empID(id), name(n), salary(s), designation(d) {}
    Employee(const Employee &e) : empID(e.empID), name(e.name), salary(e.salary), designation(e.designation) {}
    void displayDetails() {
        cout << "ID: " << empID << ", Name: " << name << ", Salary: " << salary << ", Designation: " << designation << endl;
    }
};

// Register Class
class Register {
public:
    void displayRegister() {
        cout << "RA2411003011072"<<endl;
    }
};

int main() {
    cout<<"Library Management System:"<<endl;
    Book b1(101, "C++ Programming", "Nayaj", 45.99);
    Book b2(102,"JAVA Programming","Pius",50.50);
    b1.displayBookInfo();
    b2.displayBookInfo();
	cout<< "-------------------------------------------------------------------------------"<< endl;
	
    cout<<"Online Shopping System :"<<endl;
    vector<Product> cart = { Product(1, "Laptop", 75000.00, 1), Product(2, "Mouse", 1000.00, 2) };
    displayCart(cart);
	cout<< "-------------------------------------------------------------------------------"<< endl;
	
    cout<<"Theatre Ticket Booking System"<<endl;
    MovieTicket t1("Inception", 12, 10.5);
    t1.displayTicketDetails();
    t1.bookTicket();
    t1.displayTicketDetails();
    t1.cancelTicket();
    t1.displayTicketDetails();
	cout<< "-------------------------------------------------------------------------------"<< endl;
	
    cout<<"Employee Management System"<<endl;
    Employee e1(1001, "Nayaj", 55000, "Software Engineer");
    Employee e2 = e1; // Copy constructor
    e1.displayDetails();
    e2.displayDetails();
	cout<< "-------------------------------------------------------------------------------"<< endl;
	
    // Register Display
    Register r;
    cout << "-------------------------------------------------------------------------------" << endl;
    cout << "Register No : ";
    r.displayRegister();
    cout << endl << "-------------------------------------------------------------------------------" << endl;
    return 0;

}
