//danny.diaz@utexas.edu 
//eid: dd32387
//challenge 7
//10-16-18

#include <iostream>
#include <cmath>

using namespace std;

struct triangle {

	float side_A;
	float side_B;
	float theta_A = 0;
	float theta_B = 0;
	float hypotenuse = 0;
};

void printTriangleStruct (triangle &triangle){
	cout << "Side A: " << triangle.side_A << endl;
	cout << "Side B: " << triangle.side_B << endl;
	cout << "Theta A: " << triangle.theta_A << endl;
	cout << "Theta B: " << triangle.theta_B << endl;
	cout << "Hypotenuse: " << triangle.hypotenuse << endl;

}

void compute (triangle &theVar){

	theVar.hypotenuse = sqrt((theVar.side_A*theVar.side_A)+(theVar.side_B*theVar.side_B));
	theVar.theta_A = asin(theVar.side_A/theVar.hypotenuse)*(180/M_PI);
        theVar.theta_B = asin(theVar.side_B/theVar.hypotenuse)*(180/M_PI);
}


int main(){
    triangle triangle_1, triangle_2;
    float* a;
    float* b;

    for (int i = 0; i < 2; i++){
	triangle varTriangle;
    	if (i == 0){
		//This next line just prints the memory address of sideA 
		cout << &(varTriangle.side_A) << endl;
		a = &(varTriangle.side_A); 
		b = &(varTriangle.side_B);
	}
    
	else if (i == 1){ 
		a = &(varTriangle.side_A); 
		b = &(varTriangle.side_B);
	}

    	float c,d;
    	cout << "Please provide length A." << endl;
    	cin >> c;
    	cout << "Please provide length B." << endl;
    	cin >> d;

    	
    	*a = c;
    	*b = d;
    	//Calulating the hypotenuse, angle A, and angle B via pass by reference.
    	compute(varTriangle);
    
    	printTriangleStruct(varTriangle);

    }
}	
