#include <iostream>

using namespace std;

template <typename T>

T myMax(T x, T y){
	if(x > y){
		return x;
	}
	else{
		return y;
	}
}

template <typename Z>

Z swap(Z *x, Z *y){
	Z temp = x;
	x = y;
	y = temp;
}

int main(){

	cout << "Max between 3 & 7: " << myMax(3,7) << endl;
	cout << "Max between 3.1 & 7.2: " << myMax(3.1,7.2) << endl;
	cout << "Max between 3 & 7: " << myMax('c','e') << endl;
	cout << "----------------------------------------" << endl;
	int x = 2;
	int y = 3;
	swap(x, y);
	cout << "x= " << x << ", y= " << y << endl;
	char a = 'a';
	char b = 'b';
	swap(a, b);
	cout << "a= " << a << ", b= " << b << endl;
}
