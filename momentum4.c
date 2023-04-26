#include <stdio.h>

main()

{
    
    int choice;
	
    
    printf("Enter first alphabet of week name: ");
    scanf("%c", &choice);
    

    
    switch(choice)
    {
        case 'M': 
            printf("Monday");
            break;
        case 'T': 
            printf("Tuesday");
            break;
        case 'W': 
            printf("Wednesday");
            break;
        case 't': 
            printf("Thursday");
            break;
        case 'F': 
            printf("Friday");
            break;
        case 'S': 
            printf("Saturday");
            break;
        case 's': 
            printf("Sunday");
            break;
        default: 
            printf("Invalid input! Please Enter first alphabet of week name");
    }

   
}
