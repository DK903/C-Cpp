#include <stdio.h>
#include <string.h> 
struct Book{//����һ���ṹ������ 
	char name[20];
	short price;
};
int main(){
	struct Book b = {//���ýṹ������-����һ�������͵Ľṹ����� 
		"c���Գ������",55
	};
	struct Book* zz = &b;//�ṹ��ָ�����ͣ�struct Book* 
	printf("������%s\n",b.name); 
	printf("�۸�%d$\n",b.price);//�ṹ�����.��Ա 
	strcpy(b.name,"C++"); //b.name����������  �����strcpy()���� 
	printf("%s\n",b.name);//�ɱ���ֵ  �� ����ͷ�ļ�������string.h 
	b.price = 15;//price Ϊ������ֱ�Ӹ�ֵ 
	printf("%d\n",b.price);
	printf("����ָ���ӡ�����ͼ۸�");
	printf("������%s\n",(*zz).name); 
	printf("�۸�%d\n",(*zz).price);//.�����ȼ���*�� ����Ҫ������ 
	//->  �ṹ��ָ�� -> ��Ա 
	printf("%s\n",zz->name);
	
	return 0;
} 
