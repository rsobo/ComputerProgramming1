#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

	//declares rand based on time
	srand(time(NULL));
	//gets random ints
	int numArray[2] = {rand() % 1000, rand() % 1000};
	cout << "  " << numArray[0] << "\n+ " << numArray[1] << "\n------\n";
	//waits for user to press a key
	cin.ignore();
	//prints out sum of the 2 nums
	cout << (numArray[0] + numArray[1]);
	return 0;
}

