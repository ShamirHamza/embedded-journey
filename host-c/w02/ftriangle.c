#include <stdio.h>
void triangle(int rows){
    int i, j;
    for (i = 1; i <= rows; i++){
        for (j = 1; j <= i; j++){
            printf("* ");}
        printf("\n");}}
int main(){
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    triangle(rows);
    return 0;
}