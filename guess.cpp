#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main(){

	/**srand(time(0));
	int num = rand() % 101;
	int guess;
	while(guess != num){
		cout << "Enter a guess\n";
		cin >> guess;
		if(guess > num){
			cout << "Too High\n";
		}
		else if(guess < num){
			cout << "Too Low\n";
		}
		else{
			cout << "You're winner\n";
		}
	}*/
	for(int i = 1; i < 12; i++){
		for(int j = 1; j < 12; j++){
			cout << setw(4) << j * i << " ";
		}
		cout << "\n";
	}
}

