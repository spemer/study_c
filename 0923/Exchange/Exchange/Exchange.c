#include<stdio.h>

int main(void)
{
	double usd;
	double usdTokrw;
	double eur;
	double eurTokrw;
	double jpy;
	double jpyTokrw;
	double cny;
	double cnyTokrw;

	double krw;

	usd = 1132.50;
	eur = 1346.03;
	jpy = 1024.01;
	cny = 172.97;

	printf("Input: ");
	scanf_s("%lf", &krw);

	usdTokrw = krw / usd;
	eurTokrw = krw / eur;
	jpyTokrw = krw / jpy * 100;
	cnyTokrw = krw / cny;

	printf("\n=====\n");
	printf("USD: %lf\n", usdTokrw);
	printf("EUR: %lf\n", eurTokrw);
	printf("JPY100: %lf\n", jpyTokrw);
	printf("CNY: %lf\n", cnyTokrw);
	printf("=====\n");


	getch();

	return 0;
}