#include <iostream>

using namespace std;

int max(int int1, int int2, int int3){
	if(int1 > int2 && int1 > int3){
		return int1;
	}
	else if(int2 > int1 && int2 > int3){
		return int2;
	}
	else if(int3 > int1 && int3 > int2){
		return int3;
	}
	else{
		return -1;
	}
}

double avg(double x1, double x2, double x3){
	return (x1 + x2 + x3) / 3;
}

int main(){
	cout << "Enter 3 numbers\n";
	int int1, int2, int3;
	cin >> int1 >> int2 >> int3;
	cout << max(int1, int2, int3) << "\n";
	cout << avg(int1, int2, int3);
}

