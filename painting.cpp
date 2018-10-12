#include <iostram>
// Use the ceil function
#include <cmath>

using namespace std;

// function headers
int getNumOfRoom();
double getTotalSpace(int num);

int main() {
	// start with some introduction messages
	cout << "Welcome to Saqib's painting company.";	

	// the number of room
	int	numOfroom = getNumOfRoom();

	// the total space
	double totalSpace =	getTotalSpace(numOfroom);

	// displays the following choices of paint for user to choose
	cout << "Brand" << \t << "Cost per 5 litres" << endl
		 << "A    " << \t << "RM75" << endl
		 << "B    " << \t << "RM100" << endl
		 << "C    " << \t << "RM120" << endl
	cout << endl << "The band you choose is: ";
	cin >> band;

	// display 
	// The number of litre of paint required
	return 0;
}
	
//input validation

/*functions*/

// get the number of room
int getNumOfRoom() {
	int num;
// prompts the user to enter the number of rooms
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
