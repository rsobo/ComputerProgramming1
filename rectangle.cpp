//set demo class for rectangle
#include <iostream>
#include <cmath>
using namespace std;

//rectangle class declaration
class Rectangle{
private:
    double width;
    double length;
    double coords[]; // coords[0] = x, coords[1] = y
public:
    Rectangle();
    Rectangle(double x, double y, double newWidth, double newHeight);
    void setWidth(double);
    void setLength(double);
    double getWidth () const;
    double getLength() const;
    double getArea () const;
    double getPerimeter();
    bool contains(double x, double y);
    bool contains(Rectangle r);
    double getX();
    double getY();
    bool overlap(Rectangle r);

};

Rectangle::Rectangle(){
	width = 1;
	length = 1;
	coords[0] = 0;
	coords[1] = 0;
}

Rectangle::Rectangle(double x, double y, double newWidth, double newHeight){
	width = newWidth;
	length = newHeight;
	coords[0] = x;
	coords[1] = y;
}

void Rectangle :: setWidth(double w) {
    width = w;
}

void Rectangle :: setLength(double l) {
    length = l;
}
double Rectangle :: getWidth() const {
    return width;
}
double Rectangle :: getLength() const {
    return length;
}

double Rectangle::getX(){
	return coords[0];
}

double Rectangle::getY(){
	return coords[1];
}

double Rectangle :: getArea() const {
    return width*length;
}

double Rectangle::getPerimeter(){
	return 2 * length + 2 * width;
}

bool Rectangle::contains(double x, double y){
	if((x > (coords[0] - width/2) && x < (coords[0] + width/2)) && (y > (coords[1] + length/2) && y < (coords[1] + length/2))){
		return true;
	}
	return false;
}

bool Rectangle::contains(Rectangle r){
	double topLeft[] = {r.getX() - r.getLength(), r.getY() + r.getWidth()};
	double topRight[] = {r.getX() + r.getLength(), r.getY() + r.getWidth()};
	double bottomLeft[] = {r.getX() - r.getLength(), r.getY() - r.getWidth()};
	double bottomRight[] = {r.getX() + r.getLength(), r.getY() - r.getWidth()};
	if(contains(topLeft[0], topLeft[1]) == true && contains(topRight[0], topRight[1]) == true && contains(bottomLeft[0], bottomLeft[1]) == true && contains(bottomRight[0], bottomRight[1]) == true){
		return true;
	}
	return false;
}

bool Rectangle::overlap(Rectangle r){
	double topLeft[] = {r.getX() - r.getLength(), r.getY() + r.getWidth()};
	double topRight[] = {r.getX() + r.getLength(), r.getY() + r.getWidth()};
	double bottomLeft[] = {r.getX() - r.getLength(), r.getY() - r.getWidth()};
	double bottomRight[] = {r.getX() + r.getLength(), r.getY() - r.getWidth()};
	if(contains(topLeft[0], topLeft[1]) == true || contains(topRight[0], topRight[1]) == true || contains(bottomLeft[0], bottomLeft[1]) == true || contains(bottomRight[0], bottomRight[1]) == true){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	Rectangle testBox = Rectangle(0, 0, 20, 25);
	Rectangle Box = Rectangle(2, 3, 5, 4);

    cout << "Here is the box data: " << endl;
    cout << "Width: " << testBox.getWidth() << endl;
    cout << "Length: " << testBox.getLength() << endl;
    cout << "Area: " << testBox.getArea() << endl;

    //cout << "Contains?: " << testBox.contains(Box) << endl;
    //cout << "Overlap?: " << testBox.overlap(Box) << endl;

    cout << "\nHere is the box data: " << endl;
    cout << "Width: " << Box.getWidth() << endl;
    cout << "Length: " << Box.getLength() << endl;
    cout << "Area: " << Box.getArea() << endl;

}
