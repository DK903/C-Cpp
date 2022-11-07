 #include <stdio.h>
//求出 n 的阶乘 
 int main(){
 	int in = 0;
 	int i = 0;
 	int res = 1;
 	scanf("%d",&in);//不考虑溢出 
// 	for(i = in ; i <= in && i > 0 ; i--){
// 		
// 		res = i * (i-1) ;	
//	}
//	printf("%d\n",res);
	for(i=1;i<=in;i++){
		res *= i;
	}
	printf("res = %d\n",res);
 	return 0;
 }
