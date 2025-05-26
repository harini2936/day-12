#include <stdio.h>
#include <string.h>
int main()
{
    char name[20]="harini";
    int x=strlen(name);
    printf("%d\n",x);
    for(int i=0;i<x;i++){
       printf("%c\n",name[i]);
    }
    return 0;
}