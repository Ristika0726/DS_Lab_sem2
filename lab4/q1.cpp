#include <iostream>
using namespace std;

int recursion (int a, int n){
	if(n==0){
		return 1;
	}else{
		return a*recursion(a, n-1);
	}
}

int main(){
	int a,n;
	cout<<"Enter the value for base: ";
	cin>>a;
	cout<<"Enter the value for exponential: ";	
	cin>>n;
	cout<<"The required result is: " << recursion(a,n);
	return 0;
}
