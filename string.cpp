#include <iostream>

using namespace std;

void swap(char *str1, char *str2){
	char temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}

void perm(string str, int num1, int num2){
	if(num1 == num2){
		cout << str << "\n";
	}
	else{
		for(int i = num1; i <= num2; i++){
			swap(str[num1], str[num2]);
			perm(str, num1 + 1, num2);
		}
	}
}

int main(){
	string str = "bus";
	perm(str, 0, str.size()-1);
}
