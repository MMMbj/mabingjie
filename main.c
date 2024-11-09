//202411716230
//1030027168@qq.com
//马冰洁
#include<stdio.h>
int main() {
	int n, i, m;
	unsigned long long factorial;
	scanf_s("%d", &n);
	for (i = 1;i <= n;i++) {
		factorial = 1;
		
		for (m = 1;m <= i;m++) {
			factorial *= m;
		}
	}
	printf("%llu\n",factorial);
	return 0;
}
