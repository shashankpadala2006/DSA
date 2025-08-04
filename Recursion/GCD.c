#include<stdio.h>
int GCD(int n1,int n2);
int main(){
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("GCD of %d and %d is %d\n", n1, n2, GCD(n1, n2));
    return 0;
}
int GCD(int n1, int n2) {
    if(n2 == 0)
        return n1;
    else if (n1<n2)
        return GCD(n2, n1); 
    else
        return GCD(n2, n1 % n2);
}