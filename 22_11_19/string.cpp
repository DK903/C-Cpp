#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[18] = "Hello ";
    char str2[11] = "Shiyanlou!";

    strcat(str1,str2);//str2 ������str1��ʹstr1������ַ���
    cout << "���� str1 �� str2: "<< str1<<endl;
    cout << strlen(str1)<<endl;
    return 0;
}
/*
strcpy(s1,s2)	�����ַ��� s2 �� s1
strcat(s1,s2)	���ַ��� s2 ���ӵ� s1 ĩβ
strlen(s)	    �����ַ��� s ����
strcmp(s1,s2)	�Ƚ��ַ��� s1 �� s2 �ĳ��ȣ���ͬΪ 0��s1 < s2 Ϊ -1��s1 > s2 Ϊ 1
strchr(s1,ch)	����һ��ָ�룬ָ�� s1 ���ַ� ch ��һ�γ��ֵ�λ��
strstr(s1,s2)	����һ��ָ�룬ָ�� s1 ���ַ��� s2 ��һ�γ��ֵ�λ��
*/
