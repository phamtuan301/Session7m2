#include <stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang ");
	scanf("%d", &n);
	int nums[n];
	for(int i=0;i<n;i++){
		printf("nhap so nguyen: ");
		scanf("%d", &nums[i]);
		while (nums[i] % 2 == 0){
			printf("moi ban nhap lai phan tu ");
			scanf("%d", &nums[i]);
		}
	}
	return 0;
}