#include <iostream>

using namespace std;

int factorial(int n){
	if(n == 1){
		return n;
	}
	n = n * factorial(n-1);
}

int main(){
	cout << "Enter Number\n";
	int num;
	cin >> num;
	cout << factorial(num);
}
