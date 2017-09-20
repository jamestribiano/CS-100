//Timer.c 
//Assaignment #11
#include <stdio.h>
int main()
{
	//Initialization
	int start_hours;
 	int start_minutes;
 	int start_seconds;
 	int end_hours;
 	int end_minutes;
 	int end_seconds;
 
 	//Input 
	printf("Enter the start hours\n");
 	scanf("%d", &start_hours);
  	printf("Enter the start minutes\n");
  	scanf("%d", &start_minutes);
  	printf("Enter the start seconds\n");
  	scanf("%d", &start_seconds);
  	printf("Enter the end hours\n");
  	scanf("%d", &end_hours);
  	printf("Enter the end minutes\n");
  	scanf("%d", &end_minutes);
  	printf("Enter the end seconds\n");
  	scanf("%d", &end_seconds);
 
//While loop for displaying the time 
while(1==1)
 {
    printf("%d:%d:%d\n", start_hours, start_minutes, start_seconds);
     if(start_hours == end_hours && start_minutes == end_minutes && start_seconds == end_seconds)
     {
        printf("Your timer is up! \n");
		system("PAUSE");  
        return 0;   
     }
    start_seconds = start_seconds + 1;
    
	if(start_seconds >= 60)
    {
        start_seconds = 0;
        start_minutes = start_minutes + 1;
        
		if(start_minutes >= 60)
        {
            start_minutes = 0;
            start_hours = start_hours + 1;
            
            if(start_hours >= 24)
            {
                start_hours = 0;
                start_minutes = 0;
                start_seconds = 0;
            }
        }
    }
 }
 
 system("PAUSE");  
 return 0;   
}
