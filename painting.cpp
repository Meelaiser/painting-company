#include <iostram>
// Use the ceil function
#include <cmath>

using namespace std;

int getNumOfRoom();

int main() {
	// start with some introduction messages
	cout << "Welcome to BEST painting company.";	
	
	// prompts the user to enter the square metre of wall space
	cout << "enter the square metre of wall space: ";
	cin >> square;

	// displays the following choices of paint for user to choose
	cout << "Brand" << \t << "Cost per 5 litres" << endl
		 << "A    " << \t << "RM75" << endl
		 << "B    " << \t << "RM100" << endl
		 << "C    " << \t << "RM120" << endl
	cout << endl << "The band you choose is: ";
	cin >> band;

	// display 
	// The number of litre of paint required
	

	// The cost of the paint 
	// The hours of labor required
	// The labor charges
	// The total cost of the paint job

	//input validation

	// functions
	// get the number of room
	int getNumOfRoom() {
		int num;
		cout << "Enter the number of the rooms: ";
		cin num;
		return num;
	}

    // get the wall space of each room and calculate the total wall space in square metre
	double getTotalSpace(int num) {
		double totalSpace;

		// prompts the user to enter the square metre of wall space
		for (int a = 1; a <= num; a++) {
			cout << "enter the square metre of wall space for room#" << a << ": ";
			cin >> square;
			totalSpace += square;
		}

		return totalSpace;
	}
	
    // calculate the cost of the paint
	int getCost(int price, litre) {
		int amount;
		if (litre % 5 > 0)
			amount = litre / 5 + 1;
		else 
			amount = litre / 5;

		return priceOf5 * amount;
	}


    // calculate the labour hours and labour charges
	int getCharges(int hour) {
		return hour * 60;	
	}

    // display the breakdown of the cost and the total cost
	void breakdown(int cost, int hour, int labor) {	
		 cout << "The cost of the paint is " << cost << endl
		 cout << "The hours of labor required is " << hour << endl
		 cout << "The labor charges is " << labor << endl
		 cout << "The total cost of the paint job is " << labor <<< endl
	}


	return 0;
}
