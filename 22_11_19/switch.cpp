#include <iostream>
using namespace std;
int main(){
    cout<<"����(a/s/d/w)"<<endl;
    char ch;
    cin >> ch;
    switch(ch){
        case 'w':
            cout<<"��"<<endl;break;
        case 's':
            cout<<"��"<<endl;break;
        case 'a':
            cout<<"��"<<endl;break;
        case 'd':
            cout<<"��"<<endl;break;
        default:
            cout<<"�������"<<endl;
    }
    return 0;
}
