#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Games {
public:
	Games(); // Default constructor
	Games(string, string, string, int, double);
	void SetName(string);
	void SetScore(double);
	void Print();
	void SetType(string);
	void SetYear(int);
	void SetGenre(string);
	string getName();
	string getType();
	string getGenre();
	int getYear();
	double getScore();
private:
	string name, type, genre;
	double score;
	int year;
};

Games::Games() { // Default constructor definition
	name = "UnNamed";
	type = "Undefined";
	genre = "NoGenre";
	score = -1.0;
	year = -1;
}

Games::Games(string n, string t, string g, int y, double s) {
	name = n;
	type = t;
	genre = g;
	year = y;
	score = s;
}
void Games::SetName(string gameName) {
	name = gameName;
}

//returns name
string Games::getName() {
	return name;
}

//returns type
string Games::getType() {
	return type;
}

//returns genre
string Games::getGenre() {
	return genre;
}

//returns year
int Games::getYear() {
	return year;
}

//returns score
double Games::getScore() {
	return score;
}

void Games::SetScore(double gameRank) {
	score = gameRank;
}

void Games::SetType(string gameType) {
	type = gameType;
}

void Games::SetYear(int gameYear) {
	year = gameYear;
}

void Games::SetGenre(string gameGenre) {
	genre = gameGenre;
}

void Games::Print() {
	cout << setw(20) << name << " -- ";
	cout << setw(5) << score << " -- ";
	cout << setw(5) << year << " -- ";
	cout << setw(5) << genre << " -- ";
	cout << setw(5) << type << endl;
}

//prints out games sorted alphabetically by name using bubble sort
void sortGamesName(Games myGames[]) {
	for (int i = 0; i < sizeof(myGames); i++) {
		for (int j = 0; j < sizeof(myGames); j++) {
			if (myGames[j].getName().compare(myGames[j + 1].getName()) > 0) {
				string temp = myGames[j].getName();
				myGames[j].SetName(myGames[j + 1].getName());
				myGames[j + 1].SetName(temp);

			}
		}
	}
	cout << "Sorted by name:\n";
	for (int i = 0; i <= sizeof(myGames); i++) {
		cout << myGames[i].getName() << ", ";
	}
}

//prints out games sorted alphabetically by type using bubble sort
void sortGamesType(Games myGames[]) {
	for (int i = 0; i < sizeof(myGames); i++) {
		for (int j = 0; j < sizeof(myGames); j++) {
			if (myGames[j].getType().compare(myGames[j + 1].getType()) > 0) {
				string temp = myGames[j].getType();
				myGames[j].SetType(myGames[j + 1].getType());
				myGames[j + 1].SetType(temp);

			}
		}
	}
	cout << "Sorted by type:\n";
	for (int i = 0; i <= sizeof(myGames); i++) {
		cout << myGames[i].getType() << ", ";
	}
}

//prints out games sorted alphabetically by genre using bubble sort
void sortGamesGenre(Games myGames[]) {
	for (int i = 0; i < sizeof(myGames); i++) {
		for (int j = 0; j < sizeof(myGames); j++) {
			if (myGames[j].getGenre().compare(myGames[j + 1].getGenre()) > 0) {
				string temp = myGames[j].getGenre();
				myGames[j].SetGenre(myGames[j + 1].getGenre());
				myGames[j + 1].SetGenre(temp);

			}
		}
	}
	cout << "Sorted by genre:\n";
	for (int i = 0; i <= sizeof(myGames); i++) {
		cout << myGames[i].getGenre() << ", ";
	}
}

//prints out games sorted numerically by year using bubble sort
void sortGamesYear(Games myGames[]) {
	for (int i = 0; i < sizeof(myGames); i++) {
		for (int j = 0; j < sizeof(myGames); j++) {
			if (myGames[j].getYear() > myGames[j + 1].getYear()) {
				int temp = myGames[j].getYear();
				myGames[j].SetYear(myGames[j + 1].getYear());
				myGames[j + 1].SetYear(temp);
			}
		}
	}
	cout << "Sorted by year:\n";
	for (int i = 0; i <= sizeof(myGames); i++) {
		cout << myGames[i].getYear() << ", ";
	}
}

//prints out games sorted numerically by score using bubble sort
void sortGamesScore(Games myGames[]) {
	for (int i = 0; i < sizeof(myGames); i++) {
		for (int j = 0; j < sizeof(myGames); j++) {
			if (myGames[j].getScore() > myGames[j + 1].getScore()) {
				double temp = myGames[j].getScore();
				myGames[j].SetScore(myGames[j + 1].getScore());
				myGames[j + 1].SetScore(temp);
			}
		}
	}
	cout << "Sorted by score:\n";
	for (int i = 0; i <= sizeof(myGames); i++) {
		cout << myGames[i].getScore() << ", ";
	}
}

int main() {
	Games myGames[5];
	myGames[0].SetName("Gran Turismo");
	myGames[0].SetYear(1997);
	myGames[0].SetGenre("Racing");
	myGames[0].SetType("PlayStation");
	myGames[0].SetScore(8.6);
	myGames[1] = Games("Super Mario Galaxy", "Wii Console", "Platform", 2007, 9.0);
	myGames[2] = Games("Call of Duty", "Xbox", "FPS", 2011, 10.0);
	myGames[3] = Games("Counterstrike", "PC", "FPS", 2012, 8.5);
	myGames[4] = Games("Skyrim", "Switch", "Role Playing Game", 2010, 8.0);
	myGames[0].Print();
	myGames[1].Print();
	myGames[2].Print();
	myGames[3].Print();
	myGames[4].Print();
	cout << endl;
	sortGamesName(myGames);
	cout << endl;
	sortGamesType(myGames);
	cout << endl;
	sortGamesGenre(myGames);
	cout << endl;
	sortGamesYear(myGames);
	cout << endl;
	sortGamesScore(myGames);
}

