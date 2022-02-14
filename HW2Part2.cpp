#include <iostream>
#include <array>
#include <cmath>

using namespace std;

//returns the highest value in the array
double max(double numArray[]){
	double max = 0.0;
	for(int i = 0; i < sizeof(numArray); i++){
		if(numArray[i] > max){
			max = numArray[i];
		}
	}
	return max;
}

//returns the lowest value in the array
double min(double numArray[]){
	int min = 10000000.0;
	for(int i = 0; i < sizeof(numArray); i++){
		if(numArray[i] < min){
			min = numArray[i];
		}
	}
	return min;
}

//returns the average of the array values
double avg(double numArray[]){
	return (numArray[0] + numArray[1] + numArray[2]) / 3;
}

//returns the standard devation of the array values
double stdDev(double numArray[]){
	double mu = avg(numArray);
	double step2 = 0.0;
	for(int i = 0; i < 3; i++){
		step2 += pow((numArray[i] - mu), 2);
	}
	step2 = step2 / 3;
	return sqrt(step2);
}

int main(){
	cout << "Enter 3 numbers\n";
	double int1, int2, int3;
	cin >> int1 >> int2 >> int3;
	double numArray[3] = {int1, int2, int3};
	cout << "Maximum value is: " << max(numArray) << "\n";
	cout << "Minimum value is: " << min(numArray) << "\n";
	cout << "Average value is: " << avg(numArray) << "\n";
	cout << "Standard Deviation is: " << stdDev(numArray);
	return 0;
}
