/*
Given a number X. Print "EVEN" if the first digit of X is even number. Otherwise print "ODD".

For example: In 4569 the first digit is 4, the second digit is 5, the third digit is 6 and the fourth digit is 9.

Input
Only one line containing a number X (999 < X  ≤  9999)

Output
If the first digit is even print "EVEN" otherwise print "ODD".

Examples
InputCopy
4569
OutputCopy
EVEN
InputCopy
3569
OutputCopy
ODD
Note
Second Example :

In 3569 the first digit is 3 and its ODD.
*/

// ✅ Solve 1
#include<stdio.h>
 
int main(){
    int a , res = 0;
    scanf("%d %d", &a , &res);
    res = a / 1000;
    if( res % 2 ==0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}

// ✅ Solve 2 🔥
#include<stdio.h>
 
int main(){
    
    int a = 0;
 
    scanf("%d", &a);
    
    if( (a / 1000) % 2 == 0 ){
       printf("EVEN");
    }else{
       printf("ODD");
    }
 
    return 0;
}


/*




*/