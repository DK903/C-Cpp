#include <iostream>
using namespace std;
class area
{
    public://���幫�г�Ա
        double length;
        void setwidth(double wid);
        double getwidth(void);
    private://����˽�г�Ա
        double width;
};
void area::setwidth(double wid)
{
    width = wid;
//˽�г�Ա width ֻ���ȱ����г�Ա�������ʣ�
//��ͨ����صĹ�����Ա����ʵ���ⲿ����
}
double area::getwidth(void)
{
    return width;
}
int main(){
    area len1;//�������
    area wid1;
    len1.length = 3.1;//���� area �๫�г�Ա
    cout << "length: " << len1.length << endl;
    wid1.setwidth(3.2);
    //ʹ�ù��г�Ա�������ÿ��
    cout << "width: "<<wid1.getwidth()<<endl;
    return 0;
}
