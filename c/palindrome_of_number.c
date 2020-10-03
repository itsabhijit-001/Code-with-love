//The given code snippet is for finding the palindrome of a given number.
//A function palindrome of return type int is created which returns the palindrome of a given number.



#include<stdio.h>
int palindrome(n){
//	rem=n%10;
	int rev=0;
	int rem;
	while(n!=0){
		rem=n%10;
		rev=10*rev+rem;
		n/=10;
	}
	return rev;
}



void main(){
	int n;
	printf("Enter a number whose palindrome is required  ");
	scanf("%d",&n);
	int reverse;
	reverse=palindrome(n);
	printf("The palindrome of %d is  %d",n,reverse);
}
