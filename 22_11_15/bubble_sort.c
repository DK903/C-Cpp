#include <stdio.h>
//���һ��ð������ĺ��� 
//ʵ�ֽ�һ�������������� 
void bubble_sort(int arr[],int sz)
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);// 10
	//ȷ��ð����������� 
	for (i = 0; i < sz - 1; i++)// 0 
	{//ÿһ��ð������ 
		int flag = 1;//������һ��Ҫ����������Ѿ����� 
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{             // 9 
			if(arr[j] > arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//������������ݲ�������� 
			}//  flag---������� 
		}
		if(flag == 1)
		{
			break;
		}
	}
}
int main(){
	int arr[] = {9,8,7,6,5,4,3,2,1,0} ;//��arr���������� 
	//printf("%p",&arr);
	//&arr -- ȡ����������ĵ�ַ 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//arr�����飬���Ƕ�����arr���д��� 
	//ʵ����������arr��Ԫ�صĵ�ַ 
	bubble_sort(arr,sz);//ð�������� 
	for(i=0;i<sz;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
