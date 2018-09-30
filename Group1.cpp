
//Merin Thomas, Evan Bridges
//This program implements a class and tests each of the functions within a driver program.

#include "VideoGame.h"
#include <iostream>
using namespace std;

int main()
{
	VideoGame game1;
	VideoGame game2("Fifa", "PS4", 59.99, 2016, 7);	//- needs second constructor

	//Testing set function with default constructor for game1.
	//(Feel free to change the info here. I'm not very imaginative. =] )
	game1.setTitle("testTitle1");
	game1.setConsole("testConsole1");
	game1.setPrice(12.34);
	game1.setReleaseYear(5678);//	- needs set/get
	game1.setNumberInStock(910);//	- needs set/get

	//Testing display function with get functions for game1.
	cout << "TESTING: Game 1" << endl;
	cout << "Title should be testTitle1. \n Title is: " << game1.getTitle() << endl;
	cout << "Console should be testConsole1. \n Console is: " << game1.getConsole() << endl;
	cout << "Price should be 12.34. \n Price is: " << game1.getPrice() << endl;
	cout << "Release Year should be 5678. \n Release Year is: " << game1.getReleaseYear() << endl;
	cout << "Number In Stock should be 910. \n Number In Stock is: " << game1.getNumberInStock() << endl << endl;


	// Test for second constructor, with 5 parameters for game2 goes here.
	game2.display();// - needs constructor


	//Test for Increase function with game1 goes here.
	game2.increaseStock();
	////Test for Decrease function with game2 goes here.

	system("pause");
	return 0;
}
