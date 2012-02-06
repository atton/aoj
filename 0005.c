#include<stdio.h>

int main(void){

	int a,b,n;
	char s[100];

	while(fgets(s,sizeof(s),stdin) != NULL){
		sscanf(s,"%d %d",&a,&b);
		n = GCD(a,b);
		printf("%d %d\n",n,a*(b/n));
	}
	return(0);
}

int GCD(int a , int b){

	while(1){
		if(a > b){
			a = a - b;
		}else if(b > a){
			b = b - a;
		}else{
			return a;
		}
	}

}
