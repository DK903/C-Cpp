#include <iostream>
using namespace std;
void swap(int &a,int &b){ //  a   b 
					  	//  t   
	int t = a ;
	a = b;
	b = t;
}
int main(){
	int x =3 ;
	int y =4 ;
	cout << "x = "<<x<<","<< "y = "<< y <<endl;
	swap(x,y);
	cout << "x = "<<x<<","<< "y = "<< y<<endl;
	return 0;
}
