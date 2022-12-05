
#include <iostream>
using namespace std;


class RealEstate {
public:
	string Adress;
	string City;
	double Price;
	string OwnerName;
	int OwnerAge;

	RealEstate(string adress, string city, double price, string owner, int age) {
		Adress = adress;
		City = city;
		Price = price;
		OwnerName = owner;
		OwnerAge = age;
	}

	void getInfo() {
		cout << "Adress is " << Adress << endl;
		cout << "City is " << City << endl;
		cout << "The price is " << Price << " euro" << endl;
		cout << "Owner name is  " << OwnerName << endl;
		cout << "Owner age is " << OwnerAge << endl;

	}
	void checkAge() {
		if (OwnerAge <= 18) {
			cout << "You are " << OwnerName << " and you are NOT allowed to buy a house!" << endl;
		}
		else
			cout << "You are " << OwnerName << " and you are ARE allowed to buy a house!" << endl;

	}

	void checkPrice() {
		if (Price < 200000) {
			cout << "Your real estate is so cheap, " << OwnerName << " !" << endl;
		}
	}


};



int main()
{
	RealEstate client1 = RealEstate("Bregalnitsa number 555", "Varna", 100000, "Ivan Dimitrov", 21);
	client1.getInfo();
	client1.checkAge();
	client1.checkPrice();
	cout << endl;

	RealEstate client2 = RealEstate("Vasil Levski number 12", "Varna", 200000, "Emil Kolev", 31);
	client2.getInfo();
	client2.checkAge();
	client2.checkPrice();
	cout << endl;

	RealEstate client3 = RealEstate("Ivan Vazov number 33", "Varna", 900000, "Simeon Atanasov", 60);
	client3.getInfo();
	client3.checkAge();
	client3.checkPrice();
	cout << endl;

	RealEstate client4 = RealEstate("Han Krum number 14", "Varna", 320000, "Konstantin Nikolov", 44);
	client4.getInfo();
	client4.checkAge();
	client4.checkPrice();
	cout << endl;


	RealEstate client5 = RealEstate("Kiril Shivarov number 10", "Varna", 250000, "Mihail Mihailov", 53);
	client5.getInfo();
	client5.checkAge();
	client5.checkPrice();
	cout << endl;

	RealEstate client6 = RealEstate("General Kolev number 8", "Varna", 210000, "Andrey Valkov", 31);
	client6.getInfo();
	client6.checkAge();
	client6.checkPrice();
	cout << endl;

	RealEstate client7 = RealEstate("Yane Sandanski number 23", "Varna", 700000, "Petko Vasilev", 61);
	client7.getInfo();
	client7.checkAge();
	client7.checkPrice();
	cout << endl;

	RealEstate client8 = RealEstate("Elin Pelin number 77", "Varna", 315000, "Plamen Dimitrov", 47);
	client8.getInfo();
	client8.checkAge();
	client8.checkPrice();
	cout << endl;



	system("pause>0");
	return 0;
}

