#include <stdio.h>
#include <stdlib.h> 
struct Stu
{
	char name[20];
	int age;
}; 
void qsort(void* base,//Sart of target array
			size_t num,//Array size in elements
			size_t width,//Elements size in bytes
			int(*cmp)(const void* e1,const void* e2)
			);//function
int cmp_int(const void* e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
int cmp_float(const void* e1,const void* e2)
{	
	return ((int)(*(float*)e1 - *(float*)e2));
} 
int cmp_stu_by_age(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test1(){
	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for(i=0;i < sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void test2(){
	float f[] = {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0}; 
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
	int j = 0;
	for(j=0;j < sz;j++)
	{
		printf("%f ",f[j]);
	}
}
void test3(){
	struct Stu s[3] = {{"zhangsan",20},{"lisi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s,sz,sizeof(s[0]),cmp_stu_by_age);
} 
int main(){
	test1();
	
	test2();
	test3();
	
	return 0; 
}
