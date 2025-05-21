#include <stdio.h>
#include <stdlib.h>


typedef struct expenditureAndIncome{
	double sumMoney;
	char time[13]; //="202505211702"; //change to thing happen 
	char *name;
	struct expenditureAndIncome *next;
}ExpenditureIncome;

void AlipayBorrowItCalculate();

int main(){
	AlipayBorrowItCalculate();
	return 0;
}

//borrowIt :the lending business has been deactivated . (principal:30000.) 
void AlipayBorrowItCalculate(){
	puts("Alipay borrowIt start:");
	// update data from file :onlineLoan.txt

	puts("Alipay borrowIt end.");
}

