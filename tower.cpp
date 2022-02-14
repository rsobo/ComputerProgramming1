#include <iostream>
#include <cmath>

using namespace std;

void moveDisks(int n, char fromTower, char toTower, char auxTower){
	if(n == 1){
		cout << "Move disk " << n << " from " << fromTower << " to " << toTower << endl;
	}
	else{
		moveDisks(n-1, fromTower, toTower, auxTower);
		cout << "Move disk " << n << " from " << fromTower << " to " << toTower << endl;
		moveDisks(n-1, auxTower, toTower, fromTower);
	}

}

int main(){
	cout << "Enter Number of Disks\n";
	int num;
	cin >> num;
	cout << "Number of moves: " << pow(2,num)-1 << endl;;
	moveDisks(num, 'A', 'B', 'C');
}
