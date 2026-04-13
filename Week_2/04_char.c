/*

Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

Examples
InputCopy
a
OutputCopy
A
InputCopy
A
OutputCopy
a

*/


/* ✅ Own approach - worked */
/* 
#include<stdio.h>

int main(){

    char a ;
    scanf("%c", &a);
    // printf("%d", a);

    if( a >= 97 && a <= 122 ){
        a -= 32;
        printf("%c", a);
    } else if( a >= 65 && a <=90){
        a +=32;
        printf("%c", a);
    }

    return 0;
}
    */


#include<stdio.h>

int main(){
     char ch = 'a';
     scanf("%c",&ch);

     if( ch>='a' && ch<='z'){
        ch -= 32;
        printf("%c", ch);
     }
     else{
        ch += 32;
        printf("%c", ch);
     }
    return 0;
}