#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct expenditureAndIncome
{
	double sumMoney;
	char time[13]; //="202505211702"; //change to thing happen
	char *name;
	struct expenditureAndIncome *next;
} ExpenditureIncome;
int main()
{
	time_t currentTime = time(NULL);
	struct tm *localTime = localtime(&currentTime);
	char timeString[100];
	strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", localTime);
	FILE *fptr;
	fptr = fopen("report.txt", "w");
	if (fptr == NULL)
	{
		puts("error opening file");
		return 1;
	}
	fprintf(fptr, "time is now:%s\n", timeString);
	fclose(fptr);
	return 0;
}
