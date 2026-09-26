#include <stdio.h>
int main(void){
    int a;
    scanf("%d",&a);
    switch (a) {
    case 0:
    printf("You have no goats.\n");
    case 1:
    printf("You have a singular goat.\n");
    break;
    case 2:
    printf("You have a brace of goats.\n");
    break;
    default:
    printf("You have a bona fide plethora of goats!\n");
    break;
    }
}