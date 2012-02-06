#include <stdio.h>
#include <math.h>

#define MAX 1000000

int checkPrime(int);
void init(void);
void printAnswer(int);

int prime[MAX],num;

int main(int argc, char const* argv[])
{
	init();

	char s[128];
	int i;

	while(fgets(s,sizeof(s),stdin) != NULL){
		sscanf(s,"%d",&i);
		printAnswer(i);
	}

	return 0;
}

void init(void){

	int i;

	prime[num++] = -1;			//番兵

	for(i = 2;i <= MAX;i++){
		if(checkPrime(i)){
			prime[num++] = i;
		}
	}
	prime[num] = 10000000;		//番兵
}

int checkPrime(int n){

	if(n < 2)return 0;

	int r = (int)sqrt(n);
	int i;


	for(i = 2;i <= r;i++){
		if(n % i == 0)return 0;
	}
	return 1;

}

void printAnswer(int n){

	int ans,num = 0;
	while(1){
		if((prime[num] <= n) && (prime[num+1] > n)){
			ans = num;
			break;
		}
		num++;
	}
	printf("%d\n",ans);

}
