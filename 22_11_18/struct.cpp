#include <iostream>
//struct  �ṹ�� 
using namespace std;
struct shiyanlou // shiyanlou �ṹ��
{
	int a;
	int pri(){
		return a;
	}
}s1;//�ṹ�������ı���, s1.Ԫ�����ɵ��ýṹ���е�Ԫ�� 
int main(){
	cout << "s before: "<<s1.pri()<<endl;
	s1.a = 666;
	cout << "s after: " << s1.pri()<<endl;
	return 0;
}

