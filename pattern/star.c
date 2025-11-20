#include<stdio.h>
void printStarPattern(int n);
void printnumberPattern(int n);
void printtrianglePattern(int n);
void print_tri_num_inv(int n);
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printStarPattern(n);
    printnumberPattern(n);
    printtrianglePattern(n);
    print_tri_num_inv(n);
    
    return 0;
}
void printStarPattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}
void printnumberPattern(int n){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
}
void printtrianglePattern(int n){ 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
}
void print_tri_num_inv(int n){ 
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j<=n+1-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
        
    }
    
}