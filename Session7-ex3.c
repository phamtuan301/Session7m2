#include<stdio.h>
int main(){
	int nums[5]={30,56,75,83,86};
	int count;
	for(int i=0;i<5;i++){
		if (nums[i] % 2 == 0){
			printf("%d\n", nums[i]);
			count++;
		}
	}
	if (count == 0){
		printf("mang khong co so chan");
	}
	
	return 0;
}