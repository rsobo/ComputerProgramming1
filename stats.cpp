#include <iostream>
#include <cmath>

using namespace std;

int max(int int1, int int2, int int3){
	if(int1 > int2 && int1 > int3){
		return int1;
	}
	else if(int2 > int1 && int2 > int3){
		return int2;
	}
	else{
		return int3;
	}
}

int min(int int1, int int2, int int3){
	if(int1 < int2 && int1 < int3){
		return int1;
	}
	else if(int2 < int1 && int2 < int3){
		return int2;
	}
	else{
		return int3;
	}
	return 0;
}

double avg(double int1, double int2, double int3){
	return (int1 + int2 + int3) / 3;
}

double stdDev(double int1, double int2, double int3){
	double mu = avg(int1, int2, int3);
	double step2 = 0.0;
	step2 = pow((int1 - mu), 2) + pow((int2 - mu), 2) + pow((int3 - mu), 2);
	return sqrt(step2 / 3);

}

int main(){
	cout << "Enter 3 numbers\n";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;
	cout << "Maximum value is: " << max(int1, int2, int3) << "\n";
	cout << "Minimum value is: " << min(int1, int2, int3) << "\n";
	cout << "Average value is: " << avg(int1, int2, int3) << "\n";
	cout << "Standard Deviation is: " << stdDev(int1, int2, int3);
	return 0;
}

