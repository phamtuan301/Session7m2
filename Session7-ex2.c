#include <stdio.h>
int main(){
	int nums[5];
	for(int i=0;i<5;i++){
		printf("nhap so nguyen: ");
		scanf("%d", &nums[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d", nums[i]);
	}
	return 0;
}