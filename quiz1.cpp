//Quiz 1
//Nick Vitale, Nick Quoziente, Chris Harris
//9/21/16

#include <vector>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//global variables
const int TIME[]={1130, 1300, 1630, 1930};
const int DATE[]={3, 4, 10, 11};
const double BLUE_PRICE=30.00;
const double PINK_PRICE=25.00;
const double GREEN_PRICE=18.00;
const int BLUE_ROW=5;
const int PINK_ROW=12;
const int GREEN_ROW=15;
const double SALES_TAX=0.06;
const double HFC_DISCOUNT=0.10;
const double MATINEE_DISCOUNT=0.30;
const int ZIPCODES[]={48120,48124,48126,48128};
const int ROWS=15;
const int COLUMNS=30;

//function prototypes
void load_seats(char [ROWS][COLUMNS]);
void displayMenu(int &, int &);
void displaySeats(char [ROWS][COLUMNS]);
void getTickets(vector<int>, vector<int>);
void calculateTicketPrice(vector<int>, vector<int>, int);
double getDiscount();


int main()
{
	//variables
	int date, time;
	double discount;
	char seats[ROWS][COLUMNS];
	vector<int> ticketSeats;
	vector<int> ticketRows;
	vector<int> ticketPrice;

	//function calls
	load_seats(seats);
	displayMenu(date, time); //display the menu for the user to display time and dates
	displaySeats(seats); //display the seating chart
	getTickets(ticketSeats,ticketRows);
	displaySeats(seats); //display the updated seating chart to refect the tickets sold
	calculateTicketPrice(ticketPrice, ticketRows, time); //calculate the ticket price
	discount = getDiscount(); //this is the discount ticket price for HFC students or Dearborn residents

	//output


	return 0;
}

//Make a function that will load some randome data into the array.
void load_seats(char a[ROWS][COLUMNS]) {
	srand(time(0));
	for (size_t x = 0; x < ROWS; x++) {
		for (size_t y = 0; y < COLUMNS; y++) {
			//Use random value in array.
			a[x][y] = (rand() % 2) ? 'X' : 'O';
		}
	}
}

void displayMenu(int &s_day, int &s_time)
{
	//Make a varaible to hold user input before assigning it to the input
	//variable.
	int tmp = 0;
	int size = 0;

	//Display the info to the user.
	cout << "Welcome to the online box office!" << endl;

	//Ask the user what day to attend.
	cout << "The following is a list of dates available for the show:" << endl;
	//Figure out the size of the DATE array.
	size = (sizeof(DATE) / sizeof(DATE[0]));
	for (size_t i = 0; i < size; i++) {
		cout << i << ". December " << DATE[i] << endl;
	}

	while (tmp <= 0 or size >= tmp) {
		//Get the user's input.
		cout << "Enter the option would you like: ";
		cin >> tmp;
	}
	//The data is vaild, set date to the value.
	s_day = tmp;
	tmp = 0;


	//Ask about the show times.
	cout << "The following is a list of showtimes available (in 24 hour time):" << endl;
	size = (sizeof(TIME) / sizeof(TIME[0]));
	for (size_t i = 0; i < size; i++) {
		cout << TIME[i] << endl;
	}

	while (tmp <= 0 or size >= tmp) {
		cout << "Enter the option would like: ";
		cin >> tmp;
	}
	//The data is valid, set the time to the tmp varaible.
	s_time = tmp;
}
