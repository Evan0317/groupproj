#pragma once
#include <string>
using namespace std;

class VideoGame
{
private:
	string title;
	string console;
	double price;
	int releaseYear;
	int numberInStock;
public:
	//CONSTRUCTORS:
	VideoGame();		//Default Constructor
	VideoGame(string t, string c, double p, int year, int number);		//- uncomment after defined

	//SET AND GET FUNCTIONS:		
	void setTitle(string t) { title = t; }
	void setConsole(string c) { console = c; }
	void setPrice(double p) { price = p; }
	void setReleaseYear(int y) { releaseYear = y; }
	void setNumberInStock(int n) { numberInStock = n;  }

	string getTitle() { return title; }
	string getConsole() { return console; }
	double getPrice() { return price; }
	int getReleaseYear() { return releaseYear; }
	int getNumberInStock() { return numberInStock; }


	////INCREASE + DECREASE FUNCTIONS:
	void increaseStock(int number); 	// increase numberInStock by number
	void decreaseStock(int number) { number = 10, numberInStock = numberInStock - number; }// decrease numberInStock by number

	//DISPLAY FUNCTION:
	void display();
};

