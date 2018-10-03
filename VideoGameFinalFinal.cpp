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
//Second Constructor Function Definition
VideoGame::VideoGame(string t, string c, double p, int y, int n)
{
	title = t;
	console = c;
	price = p;
	releaseYear = y;
	numberInStock = n;

}

// Function to Increase stock
void VideoGame::increaseStock(int number)
{
	numberInStock = numberInStock + number; 
	cout << "Edited Number in stock: ";
	cout << numberInStock << endl;
}

// Function to decrease stock
void VideoGame::decreaseStock(int number)
{
	numberInStock = numberInStock - number;
	cout << "Edited Number in stock: ";
	cout << numberInStock << endl;
}

//Display Function Definition:
void VideoGame::display()
{
	cout << "Title: " << getTitle() << endl;
	cout << "Console: " << getConsole() << endl;
	cout << "Price: $" << getPrice() << endl;
	cout << "Release Year: " << getReleaseYear() << endl;	
	cout << "Number In Stock: " << getNumberInStock() << endl << endl;	
}
