#include <iostream>
using namespace std;//声明cin 等 
//C++语言的输入与输出 
//C++标准I/O库包含 iostream、fstream和sstringstream
int main(){//先输入  再输出 
	int a,b;
	//标准输入流对象
	cin >> a >> b;//存放输入值的数据 （有空格
	printf("a = %d\nb = %d\n",a,b); 
	//标准输出流对象 
	cout << "a+b=" << a+b;
	return 0;
} 
