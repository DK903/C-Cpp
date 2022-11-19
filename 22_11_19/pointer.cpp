#include <iostream>
using namespace std;
int main(){
    int i = 3;
    int j = 4;
    int &x = j;//引用整形变量 i
    int *s;
    s = &j;//4
    cout << "初始化引用x： " << x <<endl;
    cout << "初始化指针 s ："<< *s << endl;
    return 0;
}
