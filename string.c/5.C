#include <stdio.h>
#include <string.h>
int main()
{
    char name[]="harini";
    
    for(int i=0;name[i]!='\0';i++){
        if((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u')){
            name[i]='*';
            
        }
        }
    printf("%s",name);
    return 0;
}