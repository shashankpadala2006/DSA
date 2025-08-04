#include<stdio.h>
void tower(int n, char beg, char aux, char end);
int main(){
    int n;
    char a, b, c;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    printf("tower of hanoi of %d disks:\n", n);
    tower(n, 'a', 'b', 'c');
}
void tower(int n, char beg, char aux,char end){
    if(n<=0)
        printf("\nillegal entry");
    else if(n==1)
        printf("\nMove disk 1 from %c to %c", beg, end);
    else{
        tower(n-1, beg, end, aux);
        tower(1, beg, aux, end);
        tower(n-1, aux, beg, end);
    }
}