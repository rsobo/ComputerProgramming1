#include <iostream>

using namespace std;

int main(){
	cout << "Insert temperature in degrees Fahrenheit\n";
	float fah;
	cin >> fah;
	cout << (fah - 32) * ((float) 5/9);
	return 0;
}
