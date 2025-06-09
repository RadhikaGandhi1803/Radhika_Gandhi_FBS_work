#include<stdio.h>
#include<math.h>
void main() {
	int n,isprime=0;
	int i=2;
	printf("Enter the number");
	scanf("%d",&n);
	while(i<=n/2) {
		if(n%i==0) {
			isprime=1;
		}
		i++;
	}

	if(isprime==0) {
		printf("%d is  prime",n);
	} else {
		printf(" %d is not prime",n);
	}
}