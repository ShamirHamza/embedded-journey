#include <stdio.h>
int main (){
    int a[10] , i;
    int sum = 0;
    for (i=0;i<10;i++){
    printf("\nEnter your number here:- ");
    scanf("%d",&a[i]);
    sum = sum+a[i];}
    float avg = sum /10;
    printf("%f",avg);
    int t=a[0];
    for(int j=1;j<=9;j++){
        if(t<a[j]){
            t=a[j];
        }
    }
    printf("\n%d is the largest",t);
    return 0;
}