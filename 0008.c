#include<stdio.h>

int main(void){

	char s[10];
	int n;

	while(fgets(s,sizeof(s),stdin) != NULL){

		sscanf(s,"%d",&n);

		printf("%d\n",func(n));

	}
	return(0);
}

int func(int n){
	int a,b,c,d,m = 0;

	for(a=0;a<=9;a++){
		for(b=0;b<=9;b++){
			for(c=0;c<=9;c++){
				for(d=0;d<=9;d++){
					if(a+b+c+d == n){
						m+=1;
					}
				}
			}
		}
	}
	return m;
}
