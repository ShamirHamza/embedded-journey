#include <stdio.h>
int main(){
    int m;
    printf("Enter the marks here :-");
    scanf("%d",&m);
    if (m>100 && m<0){
        printf("Invalid marks\n");
    } else{
    if (m>=90 && m<=100){
        printf("A grade\n");}
    else if (m>=80 && m<90){
        printf("B grade\n");
    } else if (m>=70 && m<80){
        printf("C grade\n");}
        else if (m<70) {
            printf("Fail\n)");
        }}
        return 0;
}