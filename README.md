# Project #3 Instructions

The objective of this project is to implement a class and test each of the functions within a driver program. 

1.	Create a VideoGame class using the following header file, this file should be named VideoGame.h

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
		1VideoGame();
		2VideoGame(string t, string c, double p, int year, int number);
		
	6int getReleaseYear();
	7int getNumberInStock();
		 
	11void setReleaseYear(int year);  
12void setNumberInStock(int number);
13void increaseStock(int number);	// increase numberInStock by number
14void decreaseStock(int number);	// decrease numberInStock by number
	15void display();
};


2.	Create a VideoGame implementation file named VideoGame.cpp that implements all the functions in the header file.  If functions are short (one line of code) you can choose to implement them inline if you wish.  
a.	You must have both constructors listed above, please keep in mind you can choose the default values for each member, for example:
title = “”;
numberInStock = 0;
b.	You must write all set and get functions provided above
c.	increaseStock – this function will add the number passed in to the function to the numberInStock  (numberInStock = numberInStock + number;)
d.	decreaseStock – this function will subtract the number passed in to the function from the numberInStock
e.	Your display function should list all the data members in a neatly formatted fashion
 
3.	Create a driver program named group#.cpp that tests all the functions in your class by completing the following:
a.	Declare an object named game1 that uses the default constructor
b.	Declare an object named game2 that uses the constructor with parameters and choose appropriate parameters for each, for example: VideoGame game2(“Fifa”, “PS4”, 59.99, 2016, 7);
c.	Call the set functions to set all the members of game1 appropriately (choose any game, console, etc.) that you would like.
d.	Call the get functions to get and display the individual members of game1, the cout statements should contain appropriate text and be neatly formatted
e.	Call the display function to display game2.
f.	Call increaseStock to increase the number in stock for game1 (use any number you wish) and then call the display function with game1 to ensure the function works
g.	Call decreaseStock to decrease the number in stock of game2 (use any number you wish) and then call the display function with game2 to ensure the function works

4.	Your project must contain documentation (comments)
a.	Your name at the top of the driver program
b.	A brief explanation of the program at the top of the driver program
c.	Comments in the driver program showing what function your program is testing, for example:
// Testing default constructor
VideoGame game1;

// Testing set functions
game1.setTitle(“Madden NFL 17”);

// Testing display function
game1.display();




