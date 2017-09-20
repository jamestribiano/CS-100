//ESP Game page: 226 problem #13
#include<stdio.h>

int main()
{
	int red = 0;
	int green = 1;
	int blue = 2;
	int orange = 3;
	int yellow = 4;
	int rannum;
	int numcorrect = 0;
	int numwrong = 0;
	int total;
	int userinput;
	
	while (total != 10)
	{
		rannum = rand()%4;
		
		printf("Chose a color (0 = Red, 1 = Green, 2 = Blue, 3 = Orange, 4 = Yellow): \n");
		scanf("%d", &userinput);
		
		if(rannum == 0 && userinput == 0)
		{
			printf("Red is the correct anwser\n");
			numcorrect = numcorrect + 1;
		}
		else
		{
			numwrong = numwrong + 1;
		}
			if(rannum == 1 && userinput == 1)
			{
				printf("Green is the correct anwser\n");
				numcorrect = numcorrect + 1;
			}
			else
			{
				numwrong = numwrong + 1;
			}
				if(rannum == 2 && userinput == 2)
				{
					printf("Blue is the correct anwser\n");
					numcorrect = numcorrect + 1;
				}
				else
				{
					numwrong = numwrong + 1;
				}
						if(rannum == 3 && userinput == 3)
						{
							printf("Red is the correct anwser\n");
							numcorrect = numcorrect + 1;
						}				
						else
						{
							numwrong = numwrong + 1;
						}
								if(rannum == 3 && userinput == 3)
								{
									printf("Red is the correct anwser\n");
									numcorrect = numcorrect + 1;
								}				
								else
								{
									numwrong = numwrong + 1;
								}
		total = total + 1;
	}
	
	printf("Number you got correct: %d \n", numcorrect);
	printf("Number you got incorrect: %d \n", numwrong - 40);
	
	system("PAUSE");
	return 0;
}
