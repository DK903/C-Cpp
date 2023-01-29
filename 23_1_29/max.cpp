#include <iostream>
#define N 10
int max(int a[]);
int max(int b[]){
	int i,n;
	n=b[0];
	for(i=1;i<N;i++){
		if(n<b[i]){
			n=b[i];
		}
	}
	return n;
}
int main(){
	int a[10];
	int i,m;
	for(i=0;i<N;i++){
		std::cin>>a[i];
	}
	m=max(a);
	std::cout<<"the max number is:"<<m;
	return 0;
} 
