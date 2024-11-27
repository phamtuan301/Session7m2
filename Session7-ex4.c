#include<stdio.h>
int main(){
	int n;
	printf("nhap so phan tu cua mang ");
	scanf("%d", &n);
	int array[n];
	for (int i=0; i < n;i++){
		printf("nhap phan tu thu %d cua mang ", i + 1);
		scanf("%d", &array[i]);
	}
	return 0;
}