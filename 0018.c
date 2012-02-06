#include <stdio.h>
int main(int argc, char const* argv[])
{
	int n[5];
	char s[128];
	sscanf(fgets(s,sizeof(s),stdin),"%d %d %d %d %d",n,n+1,n+2,n+3,n+4);

	int i,j,t;

	for(i = 0; i <= 5 ; i++){
		for(j = i; j <= 5 ; j++){
			if(n[i] < n[j]){
				t = n[j];
				n[j] = n[i];
				n[i] = t;
			}
		}
	}
	printf("%d %d %d %d %d\n",n[0],n[1],n[2],n[3],n[4]);

	return 0;
}
