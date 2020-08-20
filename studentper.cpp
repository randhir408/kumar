#include<stdio.h>
#include<conio.h>
main()
{
   float per;
   printf("Enetr the percentage marks=");
   scanf("%f",&per);
   if(per>=90)
      printf("Grade A+");
   else if(per>=80)
      printf("Grade A");
   else if(per>=70)
      printf("Grade B");
   else if(per>=60)
      printf("Grade C");
   else if(per>=50)
      printf("Grade D");
   return 0;
        	
}
