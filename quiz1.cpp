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
void displayMenu();
void load_seats(char [ROWS][COLUMNS]);

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
	load_seats(seats[ROWS][COLUMNS]); 
	displayMenu(&date, &time); //display the menu for the user to display time and dates
	displaySeats(seats); //display the seating chart
	getTickets(ticketSeats,ticketRows);
	displaySeats(seats); //display the updated seating chart to refect the tickets sold
	calculateTicketPrice(ticketPrice, ticketRows, time); //calculate the ticket price
	discount = getDiscount(); //this is the discount ticket price for HFC students or Dearborn residents
	
	//output
	cout<<"You have purchased: "<<
	
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

void displayMenu()
{
	cout<<"Welcome to the online box office!"<<endl;
	cout<<"Please select an option for the following show times: "<<endl;
	
}

getTickets()
{
	
	
}

calculateTicketPrice() //To be completed by Chris Harris
{
	cout << "Please enter a valid row number for your ticket: ";
	cin >> ticketRows;
	cout << "Please enter a valid date for your ticket: ";
	cin >> date;
	cout << "Please enter a valid military time for your ticket: ";
	cin >> time;
	cout << "Please enter a valid HFCC student ID number or please enter a valid dearborn zipcode and please enter 0 if you have neither: "
	cin >> HFC_DISCOUNT, ZIPCODES, x
	{
		if (ticketRows <= BLUE_ROW && ticket rows >= 0 && time == 1130, 1300 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += BLUE_PRICE * (HFC_DISCOUNT + MATINEE_DISCOUNT);
			TicketPrice += BLUE_PRICE - discount;
		}
	{
		else if (ticketRows <= GREEN_ROW && ticket rows >= 5 && time == 1130, 1300 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += GREEN_PRICE * (HFC_DISCOUNT + MATINEE_DISCOUNT);
			TicketPrice += GREEN_PRICE - discount;
		}
	{
		else if (ticketRows <= PINK_ROW && ticket rows >= 12 && time == 1130, 1300 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += PINK_PRICE * (HFC_DISCOUNT + MATINEE_DISCOUNT);
			TicketPrice += PINK_PRICE - discount;
		}
	{
		else if (ticketRows <= BLUE_ROW && ticket rows >= 5 && time == 1630, 1930 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += BLUE_PRICE * HFC_DISCOUNT;
			TicketPrice += BLUE_PRICE - discount;
		}
	{
		else if (ticketRows <= GREEN_ROW && ticket rows >= 5 && time == 1630, 1930 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += GREEN_PRICE * HFC_DISCOUNT;
			TicketPrice += GREEN_PRICE - discount;
		}
	{
		else if (ticketRows <= PINK_ROW && ticket rows >= 12 && time == 1630, 1930 && (ZIPCODES == 48120, 48124, 48126, 48128
											 or 99999>x>999999))
			discount += PINK_PRICE * HFC_DISCOUNT;
			TicketPrice += PINK_PRICE - discount;
		}
	{
		else if (ticketRows <= BLUE_ROW && ticket rows >= 0 && time == 1130, 1300 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			discount += BLUE_PRICE * MATINEE_DISCOUNT;
			TicketPrice += BLUE_PRICE - discount;
		}
	{
		else if (ticketRows <= GREEN_ROW && ticket rows >= 5 && time == 1130, 1300 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			discount += GREEN_PRICE * MATINEE_DISCOUNT;
			TicketPrice += GREEN_PRICE - discount;
		}
	{
		else if (ticketRows <= PINK_ROW && ticket rows >= 12 && time == 1130, 1300 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			discount += PINK_PRICE * MATINEE_DISCOUNT;
			TicketPrice += PINK_PRICE - discount;
		}
	{
		else if (ticketRows <= BLUE_ROW && ticket rows >= 0 && time == 1630, 1930 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			TicketPrice += BLUE_PRICE;
		}
	{
		else if (ticketRows <= GREEN_ROW && ticket rows >= 5 && time == 1630, 1930 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			TicketPrice += GREEN_PRICE;
		}
	{
		else if (ticketRows <= PINK_ROW && ticket rows >= 12 && time == 1630, 1930 && (ZIPCODES == 0 or (x<99999 or x>999999)))
			TicketPrice += PINK_PRICE;
		}
	{
		else
			cout << "Invalid entry. Please resubmit your data with the appropriate numbers.";
		} 
	return 0;
	}
}
}
}
}
