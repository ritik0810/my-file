#include<stdio.h>
int sum=0;
int reverse(int n){
    if(n==0){
        return sum;
    }
   int rem=n%10;
    sum=sum*10+rem;
    return reverse(n/10);
}
int main(){
    
   int  rev=reverse(12345);
    printf("%d",rev);
    return 0;
}
