#include <iostream>
using namespace std;
class area//����area��
{
    public://����Ϊ���г�Ա  �ⲿ���Է���
        double width;
        double length;
};
int main(){
    area area1;//������� area1
    double AREA;
    area1.width=3;
    area1.length=3.1;//�ⲿ���ʹ�������ĳ�Աwidth
    AREA = area1.width*area1.length;
    cout << AREA << endl;//������
    return 0;
}
