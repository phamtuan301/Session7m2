#include <stdio.h>
int main(){
	int nums[5]={2,3,5,1,4};
	int max = nums[0];
	int min = nums[0];
	for (int i=1;i<5;i++){
		if (nums[i] > max){
			max = nums[i];
		}
		if (nums[i]<min){
			min = nums[i];
		}
	}
	printf("so lon nhat cua mang la %d\n", max);
	printf("so nho nhat cua mang la %d", min);
	return 0;
}