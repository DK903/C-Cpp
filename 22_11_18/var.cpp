#include <iostream>
using namespace std;
int global1 = 1;//ȫ�ֱ��� 
void func(){//�����ں�����ʹ�� 
    cout << global1<<endl;
}
int main(){
	int global1 = 10; 
    cout << global1 << endl;//��������������ʹ�� 
    func();
    return 0;
    //��ȫ�ֱ�����ֲ�����������ʱ�������õ��Ǿֲ�����
}

