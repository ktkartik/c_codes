/*this programe give the ASCII value of the given character ,ASCII value is no to assign a particular character ,Full Form:
American Standard Code for Information Interchange*/
#include<stdio.h>
int main(){
    int ascii_value=0;
    printf("ASCII values ==> character \n");
    while (ascii_value<=255)
    {
        printf("%d ===> %c\n",ascii_value,ascii_value);
        ascii_value++;
    }
    
    return 0;
}