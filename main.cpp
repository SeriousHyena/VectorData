/*

SENTINAL-CONTROLLED REPETION AND VECTOR ARRAYS
-> get keyboard input non-negative integers from 0 and greater
-> accept any arbitrary number of integers from a loop and store them in a vector
-> end the loop when a negative number is entered
-> print twice the value of the elements in the vector
-> use a "priming read" before the while loop

*/

#include <iostream>
#include <string>
#include <vector>
#include <array>


using namespace std;



int main()

{
	vector<int> myVector;	//create a vector array object with no size initialization
	int keybdIn = 0;

	while (keybdIn >= 0)	//get input as long as non-negative number is entered
	{
		cout << "Please enter any non-negative integer (enter a negative integer to quit): " << endl;
		cin >> keybdIn;
		cout << keybdIn;
	}



	return 0;
}