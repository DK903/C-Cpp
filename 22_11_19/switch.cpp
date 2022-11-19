#include <iostream>
using namespace std;
int main(){
    cout<<"输入(a/s/d/w)"<<endl;
    char ch;
    cin >> ch;
    switch(ch){
        case 'w':
            cout<<"上"<<endl;break;
        case 's':
            cout<<"下"<<endl;break;
        case 'a':
            cout<<"左"<<endl;break;
        case 'd':
            cout<<"右"<<endl;break;
        default:
            cout<<"输入错误！"<<endl;
    }
    return 0;
}
