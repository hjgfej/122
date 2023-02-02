
#include<stdio.h>
main(){
	int i=1;
	int n,sum=0;
	
	printf(" enter the value :");
    scanf("%d",&n);
	
	while(i<=n){
	sum=sum+i;
	i++;
	
	}
	printf("%d\n",sum);
}

