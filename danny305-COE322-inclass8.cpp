//Danny Diaz dd32387
//In Class challenge 8
//10-23-18


#include <iostream>
#include <random>
#include <vector>
#include <ctime>

using namespace std;


int main() {
	

	vector<int> rand_nums;

	bool try_again = true;	

	srand(time(NULL));
	while (try_again == true){
		int r = 100. *  rand()/RAND_MAX;
		cout << r << endl;
		rand_nums.push_back(r);
		if (r == 42){
			try_again = false;
			cout << "42 has been reached. The size of the vector is: " 
			<< rand_nums.size() << endl;
		}
	}

}
