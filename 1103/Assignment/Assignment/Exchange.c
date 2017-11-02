/*Exchange.c*/
#include<stdio.h>
#include<math.h>
#pragma warning(disable: 4996)
#define USD 1152.42
#define EUR 1358.9
#define JPY 1020.87
#define CNY 179.43
#define GBP 1519.86
#define TWD 35.86
#define HKD 147.8
float exchange(int KRW, float money) { //엔화를 제외한 나머지 단위 환전
	float out = (float)KRW / money;
	return floor(out);
}
int change(int KRW, float out, float money) { //엔화를 제외한 나머지 단위 거스름돈
	float change = (float)KRW - (out * money);
	return ceil(change); //한국원으로 나갈 거스름돈을 올림
}
float exchange_jpy(int KRW, float money) { //엔화 환전 - 9790
	float out = ((float)KRW * 100) / money;
	float actual_out = (floor(out / 10)) * 10;
	return actual_out;
}
int change_jpy(int KRW, float out, float money) { //엔화 거스름돈
	float change = KRW - ((out / 100) * money);
	return ceil(change); //엔화일 경우의 거스름돈을 올림 57원
}
char *country;
int main(void)
{
	float money; //상수를 인자로 전달해주기 위해서 사용
	char code; //나라의 문자
	int KRW; //한국 돈
	printf("환전할 나라의 문자를 입력해주세요: ");
	scanf("%c", &code);
	printf("환전할 금액을 입력해주세요(원): ");
	scanf("%d", &KRW);
	printf("");
	if (code == 'y' || code == 'Y') { //y 또는 Y, 일본 엔화 입력했을때
		money = JPY; //상수 JPY 엔화를 대입
		printf("환전받을 금액: %0.0f JPY\n", exchange_jpy(KRW, money));
		printf("한국 거스름돈: %d 원\n", change_jpy(KRW, exchange_jpy(KRW, money), money));
		//엔화인 경우의 환전받을 금액과 거스름돈
	}
	else { //일본 엔화가 아닌 경우
		switch (code)
		{
		case 'u': case 'U':
			money = USD; //u 또는 U(미국달러)일 경우에 상수 USD 미국달러를 대입
			country = "USD";
			break;
		case 'e': case 'E':
			money = EUR;
			country = "EUR";
			break;
		case 'w': case 'W':
			money = CNY;
			country = "CNY";
			break;
		case 'p': case 'P':
			money = GBP;
			country = "GBP";
			break;
		case 'b': case 'B':
			money = TWD;
			country = "TWD";
			break;
		case 'h': case 'H':
			money = HKD;
			country = "HKD";
			break;
		}
		printf("환전받을 금액: %0.0f %s\n", exchange(KRW, money), country);
		printf("한국 거스름돈: %d 원\n", change(KRW, exchange(KRW, money), money));
		//엔화가 아닌 경우의 환전받을 금액과 거스름돈 출력
	}
	getch();
	return 0;
}