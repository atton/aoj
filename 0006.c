#include <stdio.h>
#include <string.h>
int main(void)
{
	int i;
	char t[25],s[25];

	sscanf(fgets(t,sizeof(t),stdin),"%s",s);

	i = strlen(s) - 1;
	while(i >= 0){
		printf("%c",s[i--]);
	}
	printf("\n");
	return 0;
}
