#include <stdio.h>
// EOF method [ End of File]
int main()
{
    int value;
    while (scanf("%d",&value ))
    {
        if(value == 1999){
            printf("Correct\n");
            break;
        }else{
            printf("Wrong\n");

        }
    }
    
    return 0;
}