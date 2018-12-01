//danny.diaz@utexas.edu 
//eid: dd32387
#include <iostream>
#include <cmath>

using namespace std;


float ret_hypotenuse (float a, float b){

	float c = sqrt((a*a)+(b*b));
	return c;
}

float ret_angle_A (float a, float b, float c){

	float angle_A = asin(a/c)*(180/M_PI);
	return angle_A;
}
	

float ret_angle_B (float a, float b, float c){

        float angle_B = asin(b/c)*(180/M_PI);
        return angle_B;
}


int main(){
    int a, b;
    float c;

    cout << "Please provide length A." << endl;
    cin >> a;
    cout << "Please provide length B." << endl;
    cin >> b;

    //Calulating the hypotenuse
    c = ret_hypotenuse(a,b);

    //Calculating the angles using arc sin and converting from radians to degrees
    float angle_A = ret_angle_A(a,b,c);
    float angle_B = ret_angle_B(a,b,c);

    cout << "With a side A of length " << a << " and a side B of length "<< b << endl <<
         "the hypotenuse has a length of "<< c <<"." << endl;
    cout << "Angle A is: " << angle_A << " degrees" << endl;
    cout << "Angle B is: " << angle_B << " degrees" << endl;
}
