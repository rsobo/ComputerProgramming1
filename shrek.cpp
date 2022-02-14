#include <iostream>

using namespace std;

class Shrek {
public:
	Shrek();
	Shrek(double newHeight, double newWeight);
	double getWeight();
	double getHeight();
	void setWeight(double newWeight);
	void setHeight(double newHeight);
	void eat(double foodVolume);
	void keepDiet(int numDays);
private:
	double height;
	double weight;
};

Shrek::Shrek(){
	weight = 0;
	height = 0;
}

Shrek::Shrek(double newHeight, double newWeight){
	weight = newWeight;
	height = newHeight;
}

double Shrek::getWeight(){
	return weight;
}

double Shrek::getHeight(){
	return height;
}

void Shrek::setWeight(double newWeight){
	weight = newWeight;
}

void Shrek::setHeight(double newHeight){
	height = newHeight;
}

void Shrek::eat(double foodVolume){
	weight += foodVolume * .1;
}

void Shrek::keepDiet(int numDays){
	weight -= .5 * numDays;
}

int main(){
	Shrek jeff;
	jeff.setWeight(752);
	jeff.setHeight(3);
	Shrek jack(2, 600);
	Shrek john = Shrek(5, 200);
	cout << "John weights " << john.getWeight() << "kg and is " << john.getHeight() << "m." << endl;
	john.eat(2000);
	cout << "John weights " << john.getWeight() << "kg and is " << john.getHeight() << "m." << endl;
	john.keepDiet(100);
	cout << "John weights " << john.getWeight() << "kg and is " << john.getHeight() << "m." << endl;
}
