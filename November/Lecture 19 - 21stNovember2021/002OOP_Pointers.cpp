#include<iostream>
#include<cstring>

using namespace std;

class creditCard {

	string cardNumber;
	int cvv;

	public :

		creditCard(string cn, int cv) {
			cout << "\nI am inside the parameterised constructor of creditCard\n";
			cardNumber = cn;
			cvv = cv;
		}

		string getCardNumber() {
			return cardNumber;
		}

		int getCVV() {
			return cvv;
		}

		void setCardNumber(string cn) {
			cardNumber = cn;
		}

		void setCVV(int cv) {
			cvv = cv;
		}

};

class customer {

public:

	int age;
	string name; // member object
	creditCard card; // member object

	customer(int a, string n, string cn, int cv) : age(a), name(n), card(cn, cv) {
		cout << "\nI am inside a parameterised constructor\n" << endl;
	}	

	void printCustomerInfo() {

		cout << "\nCustomer Info\n";
		cout << "Name : " << name << endl;
		cout << "Age : " << age << endl;
		cout << "CardNumber : " << card.getCardNumber() << endl;
		cout << "CVV : " << card.getCVV() << endl;
	}

};


int main() {

	customer c1(21, "Tarun", "1234-5678", 123);

	customer* cptr = &c1;

	cout << "(*cptr).age = " << (*cptr).age << endl;
	cout << "(*cptr).name = " << (*cptr).name << endl;
	cout << "cptr->age = " << cptr->age << endl;
	cout << "cptr->name = " << cptr->name << endl;

	cptr->printCustomerInfo();

	return 0;
}