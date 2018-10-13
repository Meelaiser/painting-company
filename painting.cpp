#include <iostream>
// Use the ceil function
//#include <cmath>

using namespace std;

// function headers
int getNumOfRoom();
int getTotalSpace(int);
char choosePaint();
int getPaintCost(char, int);
int getLabourCharges(int);
void breakdown(int, int);

int main() {
	// start with some introduction messages
	cout << "Welcome to Saqib's painting company.\n";	

	// the number of room
	int numOfroom = getNumOfRoom();

	// the total space
	int totalSpace = getTotalSpace(numOfroom);

	//char band;
	char band = choosePaint();

	int painCost = getPaintCost(band, totalSpace);
	int labourCharge = getLabourCharges(totalSpace);

	// display 
	breakdown(painCost, labourCharge);

	// The number of litre of paint required
	return 0;
}
	
/*functions*/

// get the number of room
int getNumOfRoom() {
	int num;

	// prompts the user to enter the number of rooms
	cout << "Please enter the number of the rooms: ";
	cin >> num;

	while (num < 1) {
		cout << "Please enter a positive integer for the number of the rooms: ";
		cin >> num;
	}

	return num;
}

// get the wall space of each room and calculate the total wall space in square metre
int getTotalSpace(int num) {
	int total = 0;

	// prompts the user to enter the square metre of wall space
	for (int a = 1; a <= num; a++) {
		cout << "enter the square metre of wall space for room#" << a << ": ";
		int square;
		cin >> square;
		total += square;
	}

	return total;
}

// calculate the cost of the paint
int getPaintCost(char band, int square) {
	int price;
	switch (band) {
		case 'A':
			price = 75; 	
			break;
		case 'B':
		   	price = 100;	
			break;
		case 'C': 
			price = 120;	
			break;
	}
	
	int amount;
	if (square % 5 > 0)
		amount = square / 5 + 1;
	else 
		amount = square / 5;
	
	return price * amount;
}

// calculate the labour hours and labour charges
int getLabourCharges(int square) {
	int charge = 60;
	int hour;

	if (square % 3 > 0)
		hour = square / 3 + 1;
	else 
		hour = square / 3;

	return charge * hour;
}

// display the breakdown of the cost and the total cost
void breakdown(int paint, int labour) {	
	 cout << "The number of litre of paint required is " << paint / 5 << endl
		  << "The cost of the paint is " << paint << endl
	      << "The hours of labor required is " << labour / 60 << endl
	      << "The labor charges is " << labour << endl
	      << "The total cost of the paint job is " << paint + labour << endl;
}

char choosePaint() {
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

	// validate the chosen brand
	bool valid = 0;
	while (valid == 0) {
		switch (brand) {
			case 'A':
			case 'a':
				brand = 'A';
			case 'B':
			case 'b':
				brand = 'B';
			case 'C':
			case 'c':
				brand = 'C';
				valid = 1;
				break;
			default:	
				break;
		}

		// ask to enter valid brand
		if (valid == 0) {
			cout << "Please Enter a brand in the table: ";
			cin >> brand;
		}
	}

	return brand;
}

//input validation
