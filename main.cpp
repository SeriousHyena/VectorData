/*
File name: VectorData

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
	vector<int> myIntVector;
	int input;

	//priming read loads the while loop for the first time it tests the condition
	cout << "Enter a positive integer to add to the vector or "
		<< "negative integer to quit! " ;
		cin >> input;


		while (input >= 0)
		{
			myIntVector.push_back(input);
			cout << "Enter a positive integer to add to the vector or "
				<< "negative integer to quit! ";
			cin >> input;
	}
		cout << "Here are the amounts doubled: " << endl;

		for (int num : myIntVector)
		{
			cout << num * 2 << endl;
		}

		cout << endl<<endl;
		cout << myIntVector.operator[](3);	//access a specific element in the vector


	return 0;
}