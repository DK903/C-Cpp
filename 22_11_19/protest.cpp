#include <iostream>
using namespace std;
class area//���� area ��
{
    protected://�����ܱ����ĳ�Ա
        double width;
};
class squarearea:area//����area ������
{
    public://����
        void setsquarewidth(double wid);//�����Ա����
        double getsquarewidth(void);

};
//���������еĳ�Ա����
void squarearea::setsquarewidth(double wid)
{//ͨ�� squarearea ������� area �����ܱ����ĳ�Ա width
    width = wid;//
}
double squarearea::getsquarewidth(void)
{
    return width;
}
int main(){
    squarearea square;//�����������
    square.setsquarewidth(3.1);
    //���ÿ��Ϊ3.1
    cout << "width: "<<square.getsquarewidth()<<endl;//������õĿ��
    return 0;
}
