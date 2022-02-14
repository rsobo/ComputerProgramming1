#include <iostream>

using namespace std;

int main(){
	cout << "Insert number of seconds\n";
	int sec;
	cin >> sec;
	cout << sec / 3600 << ":" << sec % 3600 / 60 << ":" << sec % 60;
	return 0;
}

