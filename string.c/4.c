#include <stdio.h>
#include <string.h>
int main()
{
    char name[]="harini";
    int v=0,c=0;
    for(int i=0;name[i]!='\0';i++){
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u')){
            v++;
        }
        else c++;
    }
    printf("%d %d",v,c);
    return 0;
}