#include <iostream>
using namespace std;
int main(){
    int *p; // ����һ������ָ����� 
    p = new int;
    ////��̬����һ������������ݵ��ڴ�ռ䣬
	//�������׵�ַ��������ָ����� p
    *p = 6;//Ϊָ��ָ����ڴ�鸳ֵΪ 6
    cout << *p << endl;
    delete p;//�ͷ�
    return 0;
}
