#include <stdio.h>
#include <string.h>
int main()
{
    char name[]="harini";
    char name1[]="harini";
    int x=strlen(name);
    int y=strlen(name1);
    if(x!=y) {
        printf("notequal");
        return 0;
    }
    for(int i=0;i<x;i++){  
        if(name[i]!=name1[i]){
            printf("notequal");
            return 0;
        }
    }
        printf("equal");
        return 0;
}