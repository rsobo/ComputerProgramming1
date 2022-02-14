#include <iostream>

using namespace std;

class TwoDPoint{
public:
	TwoDPoint(){
		x = 0;
		y = 0;
	}

	TwoDPoint(int x, int y){
		this->x = x;
		this->y = y;
	}

	int getX(){
		return x;
	}

	int getY(){
		return y;
	}

	void setX(int x){
		this->x = x;
	}

	void setY(int y){
		this->y = y;
	}

	void setXY(int x, int y){
		this->x = x;
		this->y = y;
	}

	void print(){
		cout << "Point @ (" << x << ", " << y << ")" << endl;
	}
private:
	int x;
	int y;
};

class ThreeDPoint : public TwoDPoint{
public:
	ThreeDPoint(){
			x = 0;
			y = 0;
			z = 0;
	}

	ThreeDPoint(int x, int y, int z){
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void setZ(int z){
		this->z = z;
	}

	int getZ(){
		return z;
	}

	void setXYZ(int x, int y, int z){
		this->x = x;
		this->y = y;
		this->z = z;
	}

	void print(){
		cout << "Point @ (" << x << ", " << y << ", " << z << ")" << endl;
	}

private:
	int x;
	int y;
	int z;
};

int main(){
	TwoDPoint jeff = TwoDPoint();
	TwoDPoint jack = TwoDPoint(4, 8);
	jeff.print();
	jack.print();
	jeff.setX(3);
	jeff.setY(2);
	jeff.print();
	jack.setXY(6, 7);
	jack.print();
	cout << "---------------------------------\n";
	ThreeDPoint alex = ThreeDPoint();
	ThreeDPoint matt = ThreeDPoint(2, 4, 6);
	alex.print();
	matt.print();
	alex.setXYZ(3, 5, 7);
	alex.print();
	cout << "-------------------------------\n";
	int x, y;
	cin >> x >> y;
	TwoDPoint lilly = TwoDPoint(x, y);
	lilly.print();
}
