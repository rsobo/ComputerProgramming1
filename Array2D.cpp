#include <iostream>

using namespace std;

void check(int arr[7][7]){
	int count = 0;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(arr[i][j] == arr[i][j+1]){
				count++;
			}
		}
	}
	if(count >= 4){
		cout << "True"<< endl;
	}
	count = 0;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(arr[i][j] == arr[i+1][j]){
				count++;
			}
		}
	}
	if(count >= 4){
		cout << "True" << endl;
	}
	count = 0;
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 6; j++){
			if(arr[i][j] == arr[i+1][j+1]){
				count++;
			}
		}
	}
	if(count >= 4){
		cout << "True"<< endl;
	}
	for(int i = 6; i > 0; i--){
		for(int j = 6; j > 0; j--){
			if(arr[i][j] == arr[i-1][j-1]){
				count++;
			}
		}
	}
	if(count >= 4){
		cout << "True" << endl;
	}
}

int main(){
	int arr[7][7] = {{0, 1, 0, 3, 1, 6, 1},
					 {0, 5, 1, 8, 6, 0, 1},
					 {5, 5, 2, 1, 8, 2, 9},
					 {6, 5, 6, 1, 1, 9, 1},
					 {1, 5, 6, 1, 4, 0, 7},
					 {3, 3, 3, 3, 4, 0, 7}};
	check(arr);
}
