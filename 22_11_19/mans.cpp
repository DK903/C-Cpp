#include <iostream>
using namespace std;
int main(){
    int *p; // 定义一个整型指针变量 
    p = new int;
    ////动态分配一个存放整型数据的内存空间，
	//并将其首地址赋给整型指针变量 p
    *p = 6;//为指针指向的内存块赋值为 6
    cout << *p << endl;
    delete p;//释放
    return 0;
}
