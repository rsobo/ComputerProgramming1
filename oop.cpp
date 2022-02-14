#include <iostream>

using namespace std;

class Rectangle{
private:
	double width;
	double length;
public:
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};

void Rectangle::setWidth(double w){
	width = w;
}

void Rectangle::setLength(double l){
	length = l;
}

double Rectangle::getWidth() const{
	return width;
}

double Rectangle::getLength() const{
	return length;
}

double Rectangle::getArea() const{
	return length * width;
}

int main(){
	Rectangle box;
	double width, len;

	cout << "Enter length & width: ";
	cin >> width >> len;
	box.setWidth(width);
	box.setLength(len);
	cout << "\nWidth: " << box.getWidth() << "\nLength: " << box.getLength() << "\nArea: " << box.getArea();
}
