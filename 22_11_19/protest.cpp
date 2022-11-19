#include <iostream>
using namespace std;
class area//定义 area 类
{
    protected://定义受保护的成员
        double width;
};
class squarearea:area//定义area 的子类
{
    public://公有
        void setsquarewidth(double wid);//定义成员函数
        double getsquarewidth(void);

};
//定义子类中的成员函数
void squarearea::setsquarewidth(double wid)
{//通过 squarearea 子类访问 area 类中受保护的成员 width
    width = wid;//
}
double squarearea::getsquarewidth(void)
{
    return width;
}
int main(){
    squarearea square;//定义子类对象
    square.setsquarewidth(3.1);
    //设置宽度为3.1
    cout << "width: "<<square.getsquarewidth()<<endl;//输出设置的宽度
    return 0;
}
