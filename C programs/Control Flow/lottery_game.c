#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char choice;
	do
	{
		srand(time(0));
		int arr[5], num, guess[5];
		for (int i = 0; i < 5; i++)
		{
			num = rand() % 40 + 1;
			arr[i] = num;
		}
		int save = 0;
		for (int e = 0; e < 5; e++)
		{
			for (int f = e + 1; f < 5; f++)
			{
				if (arr[e] > arr[f])
				{
					save = arr[e];
					arr[e] = arr[f];
					arr[f] = save;
				}
			}
		}
		printf("\nSelect any five numbers from 1 to 40\n");
		for (int a = 0; a < 5; a++)
		{
			printf("Select %d number: ", a + 1);
            scanf("%d", &guess[a]);
		}
		int status = 0, ans = 1;
		for (int m = 0; m < 5; m++)
		{
			status = 0;
			for (int n = 0; n < 5; n++)
			{
				if (arr[m] == guess[n])
				{
					status = 1;
				}
			}
			ans = (ans) && (status);
		}
		if (ans)
		{
			printf("You win!\n");
		}
		else
		{
			printf("You lose\n");
		}
		printf("\nDo you want to play again? Y/N ");
		scanf(" %c",&choice);
	} while (choice == 'Y' || choice == 'y');
	
	return 0;
}