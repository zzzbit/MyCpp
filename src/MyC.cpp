#include<stdio.h>
int num[10001];
void mySort(int *a,int n){
	int i;
	// 初始化为0
	for (i = 0; i < 10001; i++){
		num[i] = 0;
	}
	// 加入桶中
	for (i = 0; i < n; i++){
		num[a[i]]++;
	}
	// 输出结果
	for (i = 0; i < 10001; i++){
		if (num[i] != 0){
			printf("%d ",i);
		}
	}
}
int main(int argc, char * argv[]){
	int a[5] = {234,456,23,78,12};
	mySort(a,5);
	return 0;
}