#include <iostream>
using namespace std;
class area//定义area类
{
    public://定义为公有成员  外部可以访问
        double width;
        double length;
};
int main(){
    area area1;//定义对象 area1
    double AREA;
    area1.width=3;
    area1.length=3.1;//外部访问公有类里的成员width
    AREA = area1.width*area1.length;
    cout << AREA << endl;//输出面积
    return 0;
}
