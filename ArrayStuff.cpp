#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
	for(int i = 0; i < sizeof(arr); i++){
		for(int j = 0; j < sizeof(arr)-1; j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int main(){
	int arr[] = {74, 24, 32, 48, 18};
	for(int x: arr){
		cout << x << " ";
	}
	cout << "\n";
	bubbleSort(arr, 5);
	for(int x:arr){
		cout << x << " ";
	}
	/*int arr2[3][4] = {};
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 4; j++){
			arr2[i][j] = rand();
		}
	}*/
}
