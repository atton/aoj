#include<stdio.h>
int main(void){
	int i,n,h[11];

	for(i=0;i<10;i++){
		scanf("%d",&n);
		Ins(h,n);
	}

	for(i=0;i<3;i++){
		printf("%d\n",h[i]);
	}

	return(0);
}

Ins(int h[] , int n){
	int i;
	for(i=0;i<10;i++){
		if(h[i] < n){
			int a =  h[i];
			h[i] = n;
			Ins(h,a);
			return(0);
		}
	}
}
