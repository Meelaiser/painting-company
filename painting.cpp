#include <iostream>

// use the ceil function
#include <cmath>

using namespace std;

// function headers
int getNumOfRoom();
int getTotalSpace(int);
int get5LPrice();
int getPaintCost(int, int);
int getLabourCharges(int);
void breakdown(int, int, int);

int main() {
	// start with some introduction messages
	cout << "Welcome to Saqib's painting company!\n\n";	

	// the number of room
	int numOfRoom = getNumOfRoom();

	// the total space
	int totalSpace = getTotalSpace(numOfRoom);

	// get the price for 5L of paint
	int paint5L = get5LPrice();

	// the cost of the paint
	int painCost = getPaintCost(paint5L, totalSpace);

	// the labour charges 
	int labourCharge = getLabourCharges(totalSpace);

	// display some information
	breakdown(paint5L, painCost, labourCharge);

	return 0;
}


// get the number of room
int getNumOfRoom() {
	int num;

	// prompts the user to enter the number of rooms
	cout << "Please enter the number of the rooms: ";
	cin >> num;

	// input validation
	while (num < 1) {
		cout << "Please enter a positive integer for the number of the rooms: ";
		cin >> num;
	}

	return num;
}


// get the wall space of each room and calculate the total wall space in square metre
int getTotalSpace(int num) {
	double total = 0.0;

	// prompts the user to enter the square metre of wall space
	for (int a = 1; a <= num; a++) {
		cout << "enter the square metre of wall space for room#" << a << ": ";
		double square;
		cin >> square;

		// input validation
		while (square < 1) {
			cout << "Please enter a positive number for the number of the rooms: ";
			cin >> square;
		}

		total += square;
	}

	// turn the total space into an integer
	total = ceil(total);

	return total;
}


// get the brand of the paint and its price
int get5LPrice() {
	// displays the following choices of paint for user to choose
	cout << "-----------------------------------------" << endl 
		 << "|     Brand\t" << "|   Cost per 5 litres   |" << endl
		 << "|\t\t"         << "|\t\t\t|"       << endl 
		 << "-----------------------------------------" << endl 
		 << "|       A  \t" << "|\tRM75  \t\t|" << endl
		 << "-----------------------------------------" << endl 
		 << "|       B  \t" << "|\tRM100 \t\t|" << endl
		 << "-----------------------------------------" << endl 
		 << "|       C  \t" << "|\tRM120 \t\t|" << endl
	     << "-----------------------------------------" << endl; 

	// ask to enter the brand
	cout << endl << "The brand you choose is: ";
	char brand;
	cin >> brand;

	// get the price
	int price;
	bool valid = 0;
	while (!valid) {
		switch (brand) {
			case 'A':
			case 'a':
				price = 75; 	
				valid = 1;
				break;

			case 'B':
			case 'b':
				price = 100;	
				valid = 1;
				break;

			case 'C':
			case 'c':
				price = 120;	
				valid = 1;
				break;

			default:	
				break;
		}

		// validate the chosen brand
		if (valid == 0) {
			cout << "Please enter a brand in the table: ";
			cin >> brand;
		}
	}

	return price;
}


// calculate the cost of the paint
int getPaintCost(int price, int square) {
	// calculate the unit of paint to buy
	int unit;
	if (square % 12 > 0)
		unit = square / 12 + 1;
	else 
		unit = square / 12;
	
	// return the cost of the paint
	return price * unit;
}


// calculate the labour hours and labour charges
int getLabourCharges(int square) {
	// the charge of labour is 60 for 1 hour
	int charge = 60;

	// calculate the labour hours
	int hour;
	if (square % 3 > 0)
		hour = square / 3 + 1;
	else 
		hour = square / 3;

	// return the cost of the paint
	return charge * hour;
}


// display the breakdown of the cost and the total cost
void breakdown(int paint5L, int paintCost, int labourCharges) {	
	 cout << "The number of litre of paint required is " << 5 * (paintCost / paint5L) << " L."<< endl
		  << "The cost of the paint is " << paintCost << " RM." << endl
	      << "The hours of labor required is " << labourCharges / 60 << " h." << endl
	      << "The labor charges is " << labourCharges << " RM." << endl
	      << "The total cost of the paint job is " << paintCost + labourCharges << " RM." << endl;
}
