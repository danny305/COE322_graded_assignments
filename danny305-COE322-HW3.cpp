//Danny Diaz 
//dd32387
//11-25-18
//Homework 3


#include <iostream>
#include <cmath>


using namespace std;


class Triangle
{
	private:
        	float side_A;
        	float side_B;
        	float theta_A = 0;
        	float theta_B = 0;
        	float hypotenuse = 0;

	public:
		Triangle () 
		{
			side_A = 3;
			side_B = 4;
		}

		Triangle (float A = 3, float B = 4) 
		{
			side_A = A;
			side_B = B;
		}
		
		void print ()
		{
			if ( theta_A == 0 || theta_B == 0 || hypotenuse == 0)
				compute ();

        		cout << "Side A: " << side_A << endl;
        		cout << "Side B: " << side_B << endl;
        		cout << "Hypotenuse: " << hypotenuse << endl;
        		cout << "Theta A: " << theta_A << endl;
        		cout << "Theta B: " << theta_B << endl;
		}
	
		void compute ()
		{
        		hypotenuse = sqrt((side_A * side_A) + (side_B * side_B));
        		theta_A = asin(side_A / hypotenuse) * (180/M_PI);
        		theta_B = asin(side_B / hypotenuse) * (180/M_PI);
		}


};


int main(){

	Triangle tri_obj(9,9);
	tri_obj.print();

}


