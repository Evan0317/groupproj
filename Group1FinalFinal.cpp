
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
	game1.display();
	// increasing stock of game 1.
	cout << "Increasing stock by 30. " << endl;
	game1.increaseStock(30);
	cout << endl;
	// decreasing stock of game 2.
	game2.display();
	cout << "Decreasing stock by 20. " << endl;
	game2.decreaseStock(20);
	 cout << endl;

	system("pause");
	return 0;
}
