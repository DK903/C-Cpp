#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str1[18] = "Hello ";
    char str2[11] = "Shiyanlou!";

    strcat(str1,str2);//str2 连接在str1，使str1组成新字符串
    cout << "连接 str1 和 str2: "<< str1<<endl;
    cout << strlen(str1)<<endl;
    return 0;
}
/*
strcpy(s1,s2)	复制字符串 s2 到 s1
strcat(s1,s2)	将字符串 s2 连接到 s1 末尾
strlen(s)	    计算字符串 s 长度
strcmp(s1,s2)	比较字符串 s1 和 s2 的长度，相同为 0；s1 < s2 为 -1；s1 > s2 为 1
strchr(s1,ch)	返回一个指针，指向 s1 中字符 ch 第一次出现的位置
strstr(s1,s2)	返回一个指针，指向 s1 中字符串 s2 第一次出现的位置
*/
