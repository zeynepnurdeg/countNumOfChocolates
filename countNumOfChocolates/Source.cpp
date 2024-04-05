#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int countRec(int choco, int wrap) {
	if (choco < wrap)
		return (0);
	printf("\nYou can return %d wrappers back and get %d more chocolates", choco, choco / wrap);
	return (choco / wrap + countRec(choco / wrap + choco % wrap, wrap));
}


int countMaxChoco(int money, int unitPrice, int wrap) {
	printf("\nYou can buy %d chocolates\n", money / unitPrice);

	int total = money / unitPrice + countRec(money / unitPrice, wrap);
	return (total);
}

int main(void)
{
	int money, unitPrice, wrap;
	printf("How much money do you have? ");
	scanf("%d", &money);
	printf("Enter the unit price for chocolate: ");
	scanf("%d", &unitPrice);
	printf("Enter # of wrapper(s) for getting one extra chocolate: ");
	scanf("%d", &wrap);

	int total = countMaxChoco(money, unitPrice, wrap);
	printf("\nFinally the total # of chocolates is %d\n", total);
	return 0;
}