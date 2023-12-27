#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>



char str[1001];

int main() {
	int num;
	scanf("%s %d", str,&num);
	printf("%c",str[num-1]);

	return 0;
}