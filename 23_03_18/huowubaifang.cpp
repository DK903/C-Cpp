#include <stdio.h>
#include <stdlib.h>
typedef long long LL;
int main(int argc, char *argv[])
{ 
  LL n = 2021041820210418;
  LL a,b,c;
  int res = 0;
  for(a=1;a*a*a<=n;a++){
    if(n%a==0){
      for(b=a;a*b*b<=n;b++){
        if(n/a%b == 0){
          c=n/a/b;
          if(a==b && a==c) res++;
          else if(a==b || a==c || b==c) res+=3;
          else res+=6;
        }
      }
    }
  }
  printf("%d",res);
  // 请在此输入您的代码
  return 0;
}
