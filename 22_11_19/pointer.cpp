#include <iostream>
using namespace std;
int main(){
    int i = 3;
    int j = 4;
    int &x = j;//�������α��� i
    int *s;
    s = &j;//4
    cout << "��ʼ������x�� " << x <<endl;
    cout << "��ʼ��ָ�� s ��"<< *s << endl;
    return 0;
}
