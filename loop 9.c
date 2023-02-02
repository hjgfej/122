#include<stdio.h>
main(){
	int i=1;
	int n,fact=1;
	
	printf(" enter the value :");
    scanf("%d",&n);
	
	while(n>=i){
     fact*=n;
		n--;
	}
	
	printf("%d\n",fact);
	
}


