#include "VideoGame.h"
#include <iostream>
using namespace std;

//Default Constructor Function Definition:
VideoGame::VideoGame()
{
	title = "";
	console = "";
	price = 0;
	releaseYear = 0;
	numberInStock = 0;
}
//*Function for second constructor (with parameters) goes here*
VideoGame::VideoGame(string t, string c, double p, int y, int n)
{
	title = t;
	console = c;
	price = p;
	releaseYear = y;
	numberInStock = n;

}


//**Functions to increase/decrease "number in stock" go here**


void VideoGame::increaseStock(int number)
{
	
	cout << "Orig NumInStock: ";
	cout << numberInStock << endl;
	number = 10;
	numberInStock = numberInStock + number; 
	cout << "Edited Number in stock: ";
	cout << numberInStock << endl;

}

//Display Function Definition:
void VideoGame::display()
{
	cout << "Title: " << getTitle() << endl;
	cout << "Console: " << getConsole() << endl;
	cout << "Price: $" << getPrice() << endl;
	cout << "Release Year: " << getReleaseYear() << endl;				//	- needs set/get functions
	cout << "Number In Stock: " << getNumberInStock() << endl << endl;	//- needs set/get functions
}
