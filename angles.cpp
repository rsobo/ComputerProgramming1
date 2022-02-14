#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){

	/*string city1, city2;
	cout << "Enter 2 cities\n";
	getline(cin, city1);
	getline(cin, city2);
	int i = 0;
	while(true){
		char c1 = city1.at(i);
		char c2 = city2.at(i);
		if(c1 < c2){
			cout << city1 << ", " << city2;
			exit(0);
		}
		else if(c2 < c1){
			cout << city2 << ", "  << city1;
			exit(0);
		}
		i++;
	}*/

	const double PI = 3.141592653;
	double deg = 30;
	double rad = deg * (PI/180);
	cout << "Degrees" << setw(9) << "Radians" << setw(6) << "Sine" << setw(8) << "Cosine" << setw(10) << "Tangent" << endl;
	cout << deg << setw(13) << setprecision(4) << rad << setw(6) << sin(rad) << setw(8) << cos(rad) << setw(10) << tan(rad) << endl;
	deg = deg * 2;
	rad = deg * (PI/180);
	cout << deg << setw(12) << setprecision(4) << rad << setw(8) << sin(rad) << setw(6) << cos(rad) << setw(10) << tan(rad) << endl;



}
