//Danny Diaz 
//dd32387
//Challenge 9
//11-12-18


#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm>

using namespace std;


vector<int> random_vector(int len){
	srand(time(NULL));
	vector<int> ret_vector;
	for ( int i=0; i<len; i++ ){
		int num = 1000. * rand()/RAND_MAX;
		ret_vector.push_back(num);
	}
	return ret_vector;
} 


vector<int> sort_vector(vector<int> &rand_vector){
	sort(rand_vector.begin(), rand_vector.end());
}



int main() {
	int length = 10;
	
	vector<int> rand_vector = random_vector(length);
	for ( auto e : rand_vector ) {
		cout << e << " ";
	}
	cout << endl;
	
	sort_vector(rand_vector);
	
	for ( auto e : rand_vector ) {
		cout << e << " ";
	}
	cout << endl;
}
