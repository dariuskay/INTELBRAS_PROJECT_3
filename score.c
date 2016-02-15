#include <stdio.h>

int main()
{
    printf("See how Darius does compared to his classmates!\n");
    int dariusscore;
    printf("Enter Darius's score: ");
    scanf("%d", &dariusscore);

    int n, i;
    float num[200], sum=0.0, average;
    printf("Enter the numbers of students in Darius's class, besides him: ");
    scanf("%d",&n);
    while (n>200 || n<=0)
    {
        printf("Darius has only 200 students in his class, at any one time.\n");
        printf("Enter the number again: ");
        scanf("%d",&n);
    }
   for(i=0; i < n; ++i)
   {
      printf("Enter a classmate's score: ");
      scanf("%f",&num[i]);
      sum+=num[i];
   }
   average=sum/n;
   printf("Average = %.2f\n",average);
   if (dariusscore > average)
   {
        printf("Darius did better than average!\n");
   } else if (dariusscore < average) 
   {
        printf("Well, Darius didn't do as well as the class. But he tried his best!\n");
   } else 
   {
        printf("Darius did exactly average. What are the odds?\n");
   }
   return 0;
}