//C program to find Largest of four numbers Using If Else

#include<stdio.h>
int main()
{
  // Variable declaration
   int a,b,c,d, larg;

   //input numbers
   printf("Enter four Numbers\n");
   scanf("%d %d %d %d",&a,&b,&c,&d);

  // larg among a, b, c and d
    if(a>b)
      {  if(a>c)
          {
              if(a>d)
              {
                  larg = a;
              }
              else
              {
                  larg = d;
              }
          }
          else
          {  if(c>d)
              larg = c;
             else
              larg = d;
          }
      }
    else
      { if(b>c)
           {
               if(b>d)
               {
                larg = b;
               }
               else
               {
                larg = d;
               }
           }
           else
           { 
		       if(c>d)
               {
                 larg = c;
               }
               else 
               {
                 larg = d;
               }
           }

      }
       printf("%d is Largest Number",larg);

    return 0;
}
