#include <stdio.h>
int main (){
    int choice;
    printf("1.Print the sum 4 numbers of your choice :- \n");
    printf("2.The product of 3 numbers of your choice :- \n");
    printf("3.Table of number of your choice :- \n");
    printf("4.Comparison of 3 numbers :- \n");
    printf("5.Exit\n");
    printf("Enter your choice :-");
    scanf("%d",&choice);
    if(choice!=5){
        switch(choice){
            case 1:{
                float a,b,c,d;
                printf("Please enter the numbers (Enter first number then press enter and then enter another number and so on):-");
                scanf("%f %f %f %f",&a,&b,&c,&d);
                float sum = a+b+c+d;
                printf("Your sum is %f",sum);
            }break;
            case 2:{
                float e,f,g;
                printf("Please enter the numbers (Enter first number then press enter and then enter another number and so on):-");
                scanf("%f %f %f",&e,&f,&g);
                float pro = e*f*g;
                printf("Your product is %f",pro);
            }break;
            case 3:{
                int h , i;
                printf("Enter the number whose table you wanna see :- ");
                scanf("%d",&h);
                for (i=1;i<=10;i++){
                    int t = h*i;
                    printf("%d\n",t);
            }}break;
            case 4:{
                int j , k , l;
                printf ("Enter the first number j here :- ");
                scanf("%d",&j);
                printf ("Enter the second number k here :- ");
                scanf("%d",&k);
                printf ("Enter the third number l here :- ");
                scanf("%d",&l);
                if(j >= k && j >= l)
                {
                    printf("j is the largest\n");
                }
                else if(k >= j && k >= l)
                {
                    printf("k is the largest\n");
                }
                else
                {
                    printf("l is the largest\n");
                }break;}
                default:{
                printf("INVALID INPUT!!!!!\n");
            }break;
    }
    else {
    printf("Exit done!!");
}
}return 0;
}
