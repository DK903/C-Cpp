//Çó×î³¤×Ö·û´®
#include <stdio.h> 
#include <string.h>
char name[128],names[128];
int lens;
int main(){
	int n,len;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&name);
		len = strlen(name);
		if(len > lens){
			lens = len;
			strcpy(names,name);
		}
	}
	printf("%s\n",names);
	return 0;
}
