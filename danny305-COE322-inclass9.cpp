//Danny Diaz 
//dd32387
//Challenge 9
//11-12-18


#include <iostream>
#include <vector>
#include <random>
#include <ctime>
//#include <algorithm>

using namespace std;


vector<int> random_vector(int len){
	srand(time(NULL));
	vector<int> ret_vector;
	for ( int i=0; i<len; i++ ){
		float num =  1000. * rand()/RAND_MAX;
			
		ret_vector.push_back(num);
	}
	return ret_vector;
} 


void sort_vector(vector<int> &rand_vector){
	sort(rand_vector.begin(), rand_vector.end());
}

void mySort (vector <int> &rand_vector) {
	int lowest_num = 0;
	int lowest_num_index = 0;
	int init_size = rand_vector.size();
	vector<int> sorted_vector;
	int sorted_vector_size = 0;
	while (sorted_vector_size < init_size){
		for (int i=0; i < rand_vector.size(); i++){
			if (i == 0)
			{	
				lowest_num = rand_vector[i];
				lowest_num_index = i;
			}
			if (rand_vector[i] < lowest_num)
			{
				lowest_num = rand_vector[i];
				lowest_num_index = i;
			}
		}
/*		cout << "Random Vector: " << endl;
	
		for ( auto e : rand_vector ) {
			cout << e << " ";
		}
		cout << endl;
*/
		rand_vector.erase(rand_vector.begin() + lowest_num_index);
		
/*		cout << "Random Vector updated: " << endl;
	
		for ( auto e : rand_vector ) {
			cout << e << " ";
		}
		cout << endl;
*/
		sorted_vector.push_back(lowest_num);
		sorted_vector_size = sorted_vector.size();		
	}
/*	
	cout << "Sorted Vector: " << endl;	
	for ( auto e : sorted_vector ) {
		cout << e << " ";
	}
	cout << endl;
*/
	rand_vector = sorted_vector;

}


int main() {
	int length = 10;
	
	vector<int> values = random_vector(length);

	cout << "Random Vector: " << endl;
	for ( auto e : values ) {
		cout << e << " ";
	}
	cout << endl;
	
	mySort(values);
	
	/*
	sort_vector(values);
	*/
	cout << "Sorted Vector: " << endl;
	for ( auto e : values ) {
		cout << e << " ";
	}
	cout << endl;	
}
