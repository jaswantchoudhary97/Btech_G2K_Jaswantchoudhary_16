#include<stdio.h>
int main() {
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int table = 1;
    for(int i=10;i>=1; i--) {
        table =  n * i;
        printf("%d\n",table);
        
    }

return 0;
}