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

class Line {

	private:
		Point pp1; Point pp2;
	public:
		Line(Point p1, Point p2) {
			pp1 = p1; pp2 = p2;
		}

		void printout () {
			cout << "Point1(" << pp1.getx() << "," << pp1.gety() << ")" << endl;	
			cout << "Point2(" << pp2.getx() << "," << pp2.gety() << ")" << endl;
		}
		
		Point midpoint () {
			float mid_x = 0.5*(pp1.getx() + pp2.getx());
			float mid_y = 0.5*(pp1.gety() + pp2.gety());	
			Point mid_p(mid_x, mid_y);
			return mid_p;
		}

		float distance (){
			return sqrt(pow(pp1.getx() - pp2.gety(),2) + pow(pp1.getx() - pp2.gety(),2));
		}
};


int main () {

	Point p1(50,50);
	Point p2(100,100);

	/*cout << p1.getx() << "," << p1.gety() << endl;
	cout << p2.getx() << "," << p2.gety() << endl;
	cout << p1.distance_to_origin() << endl;
	p1.printout();
	cout << p1.distance(p2) << endl;

	cout << "Point1(" << p1.getx() << "," << p1.gety() << ")" << endl;
	*/
	//Line line1(Point point1(3.,4.),Point point2(6.,8.));
	
	Line line1(p1, p2);
	line1.printout();
	cout << "Distance between point 1 and point 2 in the line: " << line1.distance() << endl;
	Point midPoint = line1.midpoint();
	cout << "Midpoint: ";
	midPoint.printout();

}






