#include <stdio.h>
//����Ҫ�������е�11��2020�����ƣ��ܹ���Ҫ���ٸ��ַ�2��
int main(){
	int count = 0;
	int i = 0;
	for(i=0;i<=2020;i++)
	{
		if(i%10==2)
			count++;
		if(i/10%10==2)
			count++;
		if(i/100%10==2)
			count++;
		if(i/1000%10==2)
			count++;
	}
	printf("%d",count);
	return 0;
}
