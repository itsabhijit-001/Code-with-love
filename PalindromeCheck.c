//The given code snippet is for checking if the number is palindrome or not.
//checkPalindrome function which returns bool dtype is created to cheack .if
// the provided number is palindrome or not.

#include<stdio.h>
#include<stdbool.h>
bool checkPalindrome(n){
//	rem=n%10;
	int temp=n;
	int rev=0;
	int rem;
	while(n!=0){
		rem=n%10;
		rev=10*rev+rem;
		n/=10;
	}
	if(rev==temp){
		return true;
	}
	else{
		return false;
	}
}



void main(){
	int n;
	printf("Enter a number to check if palindrome or not ");
	scanf("%d",&n);
	bool isPalindrome;
	isPalindrome=checkPalindrome(n);
	if(isPalindrome){
		printf("The number %d is palindrome.",n);		
	}
	else{
		printf("The number %d is not palindrome.",n);		
	}
}
