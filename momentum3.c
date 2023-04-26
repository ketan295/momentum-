#include<stdio.h>

main()
{
  
   int a,b,c,d, larg;

   
   printf("Enter four Numbers\n");
   scanf("%d %d %d %d",&a,&b,&c,&d);

  
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

   
}
