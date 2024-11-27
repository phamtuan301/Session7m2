#include <stdio.h>
int main(){
	int nums[5]={2,3,5,1,4};
	for (int i=0;i<5;i++){
		if (nums[i] % 2 ==0){
			nums[i] = nums[i] + 3;
		}
		else{
			nums[i] = nums[i] + 2;
		}
	}
	for(int i=0;i<5;i++){
		printf("%d", nums[i]);
	}
	return 0;
}