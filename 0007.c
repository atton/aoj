#include <stdio.h>
int func(int money , int n);

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(100000,n));
	return 0;
}

int f(int money , int n){
	int m;

	m = money * 1.05;

	if(m % 1000 > 0){
		m = m - (m % 1000);
		m += 1000;
	}

	if(n > 1){
		return f(m,n-1);
	}else{
		return m;
	}
}
