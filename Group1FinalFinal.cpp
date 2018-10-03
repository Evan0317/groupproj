
//Merin Thomas, Evan Bridges
//This program implements a class and tests each of the functions within a driver program.
// This program demonstrates the use of functions across multiple files. 

#include "VideoGame.h"
#include <iostream>
using namespace std;

int main()
{
	VideoGame game1;
	VideoGame game2("Fifa", "PS4", 59.99, 2016, 7);

	//Testing set function with default constructor for game1.
	//(Feel free to change the info here. I'm not very imaginative. =] )
	game1.setTitle("Overwatch");
	game1.setConsole("PC");
	game1.setPrice(40.00);
	game1.setReleaseYear(2016);
	game1.setNumberInStock(910);
	//displaying game1 using getfunctions.
	cout << "Title: " << game1.getTitle() << endl;
	cout << "Console: " << game1.getConsole() << endl;
	cout << "Price: $" << game1.getPrice() << endl;
	cout << "Release Year: " << game1.getReleaseYear() << endl;	
	cout << "Number In Stock: " << game1.getNumberInStock() << endl << endl;
	// increasing stock of game 1.
	cout << "Increasing stock by 30. " << endl;
	game1.increaseStock(30);
	cout << endl;
	
	
	//Testing display function of game2.
	game2.display();
	// decreasing stock of game2
	cout << "Decreasing stock by 20. " << endl;
	game2.decreaseStock(20);
	cout << endl;

	system("pause");
	return 0;
}
