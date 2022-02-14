#include <iostream>

using namespace std;

class Animal{
public:
	Animal(){
		age = 0;
		weight = 10;
	}
	Animal(int age, double weight){
		this->age = age;
		this->weight = weight;
	}
	int getAge(){
		return age;
	}
	double getWeight(){
		return weight;
	}
	void setAge(int age){
		this->age = age;
	}
	void setWeight(double weight){
		this->weight = weight;
	}
	void display(){
		cout << "Age: " << age << ", Weight: " << weight << endl;
	}
	void grow(){
		cout << "*Eats food*" << endl;
	}

protected:
	int age;
	double weight;
};

class Mammal : public Animal{
public:
	Mammal(){
		age = 0;
		weight = 10;
		habitat = "Forest";
		food = "Plants";
	}
	Mammal(int age, double weight, string habitat, string food){
		this->age = age;
		this->weight = weight;
		this->habitat = habitat;
		this->food = food;
	}
	string getHabitat(){
		return habitat;
	}
	string getFood(){
		return food;
	}
	void setHabitat(string habitat){
		this->habitat = habitat;
	}
	void setFood(string food){
		this->food = food;
	}
	void display(){
		cout << "Age: " << age << ", Weight: " << weight << ", Habitat: " << habitat << ", Food: " << food << endl;
	}
	void eat(){
		if(food == "Plant"){
			cout << "Eats Leaves" << endl;
		}
		if(food == "Meat"){
			cout << "Eats Humans" << endl;
		}
	}

protected:
	string habitat;
	string food;
};

class Lion : public Mammal{
public:
	Lion(){
		age = 0;
		weight = 10;
		habitat = "Forest";
		food = "Plants";
		prey = "Zebra";
	}
	Lion(int age, double weight, string habitat, string food, string prey){
		this->age = age;
		this->weight = weight;
		this->habitat = habitat;
		this->food = food;
		this->prey = prey;
	}
	string getPrey(){
		return prey;
	}
	void setPrey(string prey){
		this->prey = prey;
	}
	void display(){
		cout << "Age: " << age << ", Weight: " << weight << ", Habitat: " << habitat << ", Food: " << food << ", Prey: " << prey << endl;
	}
	void hunt(){
		cout << "Runs fast to catch prey" << endl;
	}
private:
	string prey;
};

class Elephant : public Mammal{
public:
	Elephant(){
		age = 0;
		weight = 100;
		habitat = "Forest";
		food = "Plants";
		grass = 400;
	}
	Elephant(int age, double weight, string habitat, string food, double grass){
		this->age = age;
		this->weight = weight;
		this->habitat = habitat;
		this->food = food;
		this->grass = grass;
	}
	double getGrass(){
		return grass;
	}
	void setGrass(double grass){
		this->grass = grass;
	}
	void display(){
		cout << "Age: " << age << ", Weight: " << weight << ", Habitat: " << habitat << ", Food: " << food << ", Grass: " << grass << endl;
	}
	void drink(){
		cout << "Through trunk into mouth" << endl;
	}
private:
	double grass;
};

int main(){
	Animal terry = Animal(10, 20);
	Mammal jerry = Mammal(15, 25, "Plains", "Plants");
	Lion larry = Lion(12, 50, "Desert", "Meat", "Buffalo");
	Elephant kerry = Elephant(8, 2000, "Zoo", "Grass", 600);
	terry.display();
	jerry.display();
	larry.display();
	kerry.display();
}
