#include<stdio.h>

void fun(int n) {
    if(n==0)
        return;
    else
        printf("%d ", n);
    return fun(n-1);
}
int main() {
    int n = 5;
    fun(n);
    return 0;
}