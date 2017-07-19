#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,i,qnt;

	scanf("%d",&N);
	qnt=0;
	if(N<=10000)
	{
    for(i=1;i<=N;++i) {
        if (N % i == 0) {
            qnt++;
        }
    }
	printf("%d",qnt);
}
}
