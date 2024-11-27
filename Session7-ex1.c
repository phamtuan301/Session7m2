#include<stdio.h>
int main(){
	int num[4]={1,2,3,4};
	for(int i=0;i<4;i++){
		printf("%d\n", num[i]);
	}
	printf("do dai cua mang la %d", sizeof(num)/sizeof(int));
	return 0;
}