#include <stdio.h>

int main()
{
    int choice;
    while(1)
    {
        printf("1. Print the sum of 4 numbers of your choice\n");
        printf("2. The product of 3 numbers of your choice\n");
        printf("3. Table of number of your choice\n");
        printf("4. Comparison of 3 numbers\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            {
                float a, b, c, d;
                printf("Please enter 4 numbers: ");
                scanf("%f %f %f %f", &a, &b, &c, &d);
                float sum = a + b + c + d;
                printf("Your sum is %f\n", sum);
            }
            break;
            case 2:
            {
                float e, f, g;
                printf("Please enter 3 numbers: ");
                scanf("%f %f %f", &e, &f, &g);
                float pro = e * f * g;
                printf("Your product is %f\n", pro);
            }
            break;
            case 3:
            {
                int h, i;
                printf("Enter the number whose table you wanna see: ");
                scanf("%d", &h);
                for(i = 1; i <= 10; i++)
                {
                    printf("%d x %d = %d\n", h, i, h * i);
                }
            }
            break;
            case 4:
            {
                int j, k, l;
                printf("Enter the first number: ");
                scanf("%d", &j);
                printf("Enter the second number: ");
                scanf("%d", &k);
                printf("Enter the third number: ");
                scanf("%d", &l);
                if(j >= k && j >= l)
                {
                    printf("%d is the largest\n", j);
                }
                else if(k >= j && k >= l)
                {
                    printf("%d is the largest\n", k);
                }
                else
                {
                    printf("%d is the largest\n", l);
                }
            }
            break;
            case 5:
            {
                printf("Exit done!!\n");
                return 0;
            }
            default:
            {
                printf("INVALID INPUT!!!!!\n");
            }
            break;
        }
    }
    return 0;
}