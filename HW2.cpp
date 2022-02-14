#include <iostream>

using namespace std;

//return true if even and false if odd
bool evenOrOdd(int num){
	if(num % 2 == 0){
		return true;
	}
	else{
		return false;
	}
}

//returns false if not prime and true if prime
bool isPrime(int num){
	for(int i = 2; i < num; i++){
		if(num % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	cout << "Enter a number\n";
	int num;
	cin >> num;
	if(evenOrOdd(num) == true && isPrime(num) == false){
		cout << "The number is even and not prime";
	}
	else if (evenOrOdd(num) == false && isPrime(num) == false){
		cout << "The number is odd and not prime";
	}
	else{
		cout << "The number is odd and prime";
	}
}

