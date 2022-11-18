#include <iostream>
//struct  结构体 
using namespace std;
struct shiyanlou // shiyanlou 结构体
{
	int a;
	int pri(){
		return a;
	}
}s1;//结构体声明的变量, s1.元素名可调用结构体中的元素 
int main(){
	cout << "s before: "<<s1.pri()<<endl;
	s1.a = 666;
	cout << "s after: " << s1.pri()<<endl;
	return 0;
}

