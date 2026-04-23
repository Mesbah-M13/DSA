#include<stdio.h>
#include<string.h>

int main(){
     char s[1000], t[1000];
     scanf("%s\n", &s);
     scanf("%s\n", &t);

     printf("%d %d\n", strlen(s) , strlen(t));
     printf("%s %s", s, t );

    return 0;
}