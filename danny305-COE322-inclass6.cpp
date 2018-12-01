//Danny Diaz - dd32387
//Inclass Challange - 6 
//10-4-18


#include <iostream>
#include <map>
using namespace std;



unsigned fibonacci(unsigned n){
	
	if (n == 0){
		return 0;
	}
	
	else if (n == 1) {
		return 1;
	}
	else {
		return fibonacci(n-1) +  fibonacci(n-2); 
	}	
} 


//This function caches the fibonacci to lower the compute cost of large fibonacci numbers. 

unsigned fibo_memo(unsigned n){

	static map<unsigned,unsigned> memo;
	
	if(n <= 1){
		return n;
	}

	if(memo.count(n)>0){
		return memo[n];
	}
	// otherwise
	unsigned ret = fibo_memo(n-1) + fibo_memo(n-2);
	memo[n] = ret;
	return ret;
}



int main () {
	
	unsigned n;
	cout<< "Which fibonacci number would you like?" << endl;
	cin >> n;
	cout << "The " << n << " fibonacci number is: "<<fibo_memo(n) <<endl;
}
