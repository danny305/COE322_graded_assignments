//danny305
//dd32387
#include <iostream>
#include <time.h>

using std::cout;
using std::endl;
using std::cin;


int main () {
	int head_count = 0;
	int total_flips;

	//cout << "How many times would you like to flip the coin?" << endl;
	//cin >> total_flips;
	
	total_flips = 1000000;

	srand(time(NULL));
	int rand();

	for (int i = 0; i < total_flips; i++){	
		int random_number = rand();
		if (random_number % 2 == 0){
			head_count++;
		}
	}
	
	cout << "The coin was flipped " << total_flips << " times...." << endl;
	cout << "The coin landed on head " << head_count << " times " << endl;
	cout << "The coin landed on tails " << total_flips - head_count << " times " 
	<< endl;

}
	
