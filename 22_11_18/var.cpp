#include <iostream>
using namespace std;
int global1 = 1;//全局变量 
void func(){//可以在函数中使用 
    cout << global1<<endl;
}
int main(){
	int global1 = 10; 
    cout << global1 << endl;//可以在主函数中使用 
    func();
    return 0;
    //当全局变量与局部变量重名的时候，起作用的是局部变量
}

