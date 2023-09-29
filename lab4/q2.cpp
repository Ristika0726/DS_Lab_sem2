#include <iostream>
#include <math>
using namespace std;

int recursion (int b, int n, int m){
	if(n==0){
		return 1;
	}else if(n%2==0){
		return recursion (b,n/2,m)*recursion(b,n/2,m)%m;
	}else{
		return((recursion(b,floor(n/2),m)*recursion(b,floor(n/2),m))%m)*(b%m)%m;
	}
}

int main(){
	int b,m,n;
	cout<<"Enter the integer for base: ";
	cin>>b;
	cout<<"Enter the integer for exponential: ";	
	cin>>n;
	cout<<"Enter the integer for modulus: ";
	cin>>m;
	cout<<"The required recursive algorithm of modular exponential is: " << endl;
	cout<<recursion(b,m,n)
	return 0;
}
