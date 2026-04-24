#include<stdio.h>

int main(){
     int t;
     scanf("%d", &t);
     int m1=0,m2=0,d=0;

     for (int i = 1; i <= t; i++)
     {
       scanf("%d %d %d",&m1,&m2,&d);
    // printf("%d %d %d\n",m1,m2,d);

       int fewer_days = 0;
       int total_days = (d*m1)/(m1+m2);
       fewer_days = d- total_days;
       printf("%d\n",fewer_days );
       
     }
     
    return 0;
}