#include<stdio.h>

int main(void){
	int a,b,i = 0;
	char s[128];

	while(fgets(s,sizeof(s),stdin) != NULL){
		sscanf(s,"%d %d" , &a , &b);
		printf("%d\n",f(a+b));
	}
	return(0);
}

int f(int i){
	int c = 1;
	while(1){
		if(i/10 > 0){
			i = i /10;
			c++;
		}else break;
	}
	return c;
}
