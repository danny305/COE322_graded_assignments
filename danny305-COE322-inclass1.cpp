//danny.diaz@utexas.edu 
//eid: dd32387
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int a;
    int b;
    float c;

    cout << "Please provide length A." << endl;
    cin >> a;
    cout << "Please provide length B." << endl;
    cin >> b;

    //Calulating the hypotenuse
    c = sqrt((a*a)+(b*b));

    //Calculating the angles using arc sin and converting from radians to degrees
    float angle_A = asin(a/c)*(180/M_PI);
    float angle_B = asin(b/c)*(180/M_PI);
    cout << "With a side A of length " << a << " and a side B of length "<< b << endl <<
         "the hypotenuse has a length of "<< c <<"." << endl;
    cout << "Angle A is: " << angle_A << " degrees" << endl;
    cout << "Angle B is: " << angle_B << " degrees" << endl;
}
