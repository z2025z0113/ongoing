#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct expenditureAndIncome{
	double sumMoney;
	char time[13]; //="202505211702"; //change to thing happen 
	char *name;
	struct expenditureAndIncome *next;
}ExpenditureIncome;

void AlipayBorrowItCalculate();

int main(){
	puts("program startup:");
	AlipayBorrowItCalculate();
	puts("analysis report:");
	time_t currentTime = time(NULL);
	struct tm *localTime = localtime(&currentTime);
	char timeString[100] ;
	strftime(timeString,sizeof(timeString),"%Y-%m-%d %H:%M:%S",localTime);

	printf("current time:%s\n",timeString);
	puts("program end.");
	return 0;
}

//borrowIt :the lending business has been deactivated . (principal:30000.) 
void AlipayBorrowItCalculate(){
	puts("Alipay borrowIt start:");
	// update data from file :onlineLoan.txt
	
	puts("Alipay borrowIt end.");
}

