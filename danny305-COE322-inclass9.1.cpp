#include <iostream>
#include <cmath>
#include <string>

using namespace std;



class Point {

	private:
		float xcoord; float ycoord;
	
	public:

		Point () {
			xcoord = 1; ycoord = 1;
		}

		Point (float x, float y) {
			xcoord = x; ycoord = y;	
		}
	 
		float getx() {
			return xcoord;
		}
			
		float gety() {
			return ycoord;
		}

		float distance_to_origin () {
			return sqrt(pow(xcoord,2) + pow(ycoord,2));		
		}

		void printout () {
			cout << "Point(" << xcoord << "," << ycoord << ")"<< endl;
		}
	
		float  distance (Point p2) {			
			return sqrt(pow(xcoord - p2.getx(),2) + pow(ycoord - p2.gety(),2));
		}
};

int main () {

	Point p1(50,50);
	Point p2(5,12);

	cout << "Point 1: ";
	p1.printout();
	cout << "Point 2: ";
	p2.printout();

	cout << p1.getx() << "," << p1.gety() << endl;
	cout << p2.getx() << "," << p2.gety() << endl;

	cout << "Distance between point 1 and origin: "<< p1.distance_to_origin() << endl;
	cout << "Distance between point 1 and point 2: "<< p1.distance(p2) << endl;

}


