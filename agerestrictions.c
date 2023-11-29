 #include<stdio.h>
void main()
{
    int s;
    printf("enter the age");
    scanf("%d",&s);
    if(s>=18&&s<=50)
    {
      if(s>=18&&s<=25) 
    
      {
        printf("you are eligible for grade 1 job");
      }
      else 
      {
      printf("you are eligible for grade 2 job");
      }
    }
      else
      {
         printf("you are not eligible for grade 3 job");
    }
    }
