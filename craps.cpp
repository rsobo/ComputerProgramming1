#include <iostream>
#include <ctime>
//#include <iomanip>

using namespace std;

void printRoll(int r1, int r2){
	cout << "Roll 1: " << r1 << " Roll 2: " << r2 << endl;
}

bool crap(int r1, int r2){
	if((r1+r2) == 2 || (r1+r2) == 3 || (r1+r2) == 12){
		return true;
	}
	else{
		return false;
	}
}

bool natural(int r1, int r2){
	if((r1+r2) == 7 || (r1+r2) == 11){
		return true;
	}
	else{
		return false;
	}
}

bool point(int r1, int r2){
	int count = 1;
	while(true){
		if(count > 12){
			return false;
		}
		if((r1+r2) == 7){
			return false;
		}
		else if((r1+r2) == count){
			return true;
		}
		else{
			r1 = rand() % 6 + 1;
			r2 = rand() % 6 + 1;
			printRoll(r1, r2);
		}
		count++;
	}
}

int main(){
	srand(time(0));
	int r1 = rand() % 6 + 1;
	int r2 = rand() % 6 + 1;
	printRoll(r1, r2);
	if(crap(r1, r2) == true){
		cout << "You Lose";
	}
	else if(natural(r1, r2) == true){
		cout << "You Win";
	}
	else{
		if(point(r1, r2) == false){
			cout << "You Lose";
		}
		else{
			cout << "You Win";
		}
	}
}
