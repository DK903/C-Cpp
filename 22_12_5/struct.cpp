#include <stdio.h>
struct Stu{
//������һ���ṹ������ - Struct Stu 
	char name[5];
	int age;
	char id[20] ;
};
int main(){
	//ʹ��struct Stu������ʹ�����һ��ѧ������s1������ʼ�� 
	struct Stu s1 = {"����",
						20, 
					"2252120583"
	};
	struct Stu * p = &s1; 
	//�ṹ��ָ�� -> ��Ա�� 
 	printf("%s\n",p->name);
	
	//��ӡ����    �ṹ�����.��Ա�� 
	printf("%s\n",s1.name);
	printf("%d\n",s1.age);
	printf("%s\n",s1.id);
	return 0; 
} 
