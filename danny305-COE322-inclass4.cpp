//danny.diaz@utexas.edu 
//eid: dd32387
#include <iostream>
#include <cmath>

using namespace std;


void compute (float &A, float &B, float &C, float &angleA, float &angleB ){

	C = sqrt((A*A)+(B*B));
	angleA = asin(A/C)*(180/M_PI);
        angleB = asin(B/C)*(180/M_PI);
}


int main(){
    float a, b;
    float c, angle_A, angle_B;

    cout << "Please provide length A." << endl;
    cin >> a;
    cout << "Please provide length B." << endl;
    cin >> b;

    //Calulating the hypotenuse, angle A, and angle B via pass by reference.
    compute(a,b,c,angle_A, angle_B);

    cout << "With a side A of length " << a << " and a side B of length "<< b << endl <<
         "the hypotenuse has a length of "<< c <<"." << endl;
    cout << "Angle A is: " << angle_A << " degrees" << endl;
    cout << "Angle B is: " << angle_B << " degrees" << endl;
}
