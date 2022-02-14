#include <iostream>

using namespace std;

int main(){
	cout << "Insert number\n";
	int num;
	cin >> num;
	if(num % 5 == 0){
		cout << "HiFive ";
	}
	if(num % 2 == 0){
		cout << "HiEven";
	}
	return 0;
}

