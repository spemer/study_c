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
float exchange(int KRW, float money) { //��ȭ�� ������ ������ ���� ȯ��
	float out = (float)KRW / money;
	return floor(out);
}
int change(int KRW, float out, float money) { //��ȭ�� ������ ������ ���� �Ž�����
	float change = (float)KRW - (out * money);
	return ceil(change); //�ѱ������� ���� �Ž������� �ø�
}
float exchange_jpy(int KRW, float money) { //��ȭ ȯ�� - 9790
	float out = ((float)KRW * 100) / money;
	float actual_out = (floor(out / 10)) * 10;
	return actual_out;
}
int change_jpy(int KRW, float out, float money) { //��ȭ �Ž�����
	float change = KRW - ((out / 100) * money);
	return ceil(change); //��ȭ�� ����� �Ž������� �ø� 57��
}
char *country;
int main(void)
{
	float money; //����� ���ڷ� �������ֱ� ���ؼ� ���
	char code; //������ ����
	int KRW; //�ѱ� ��
	printf("ȯ���� ������ ���ڸ� �Է����ּ���: ");
	scanf("%c", &code);
	printf("ȯ���� �ݾ��� �Է����ּ���(��): ");
	scanf("%d", &KRW);
	printf("");
	if (code == 'y' || code == 'Y') { //y �Ǵ� Y, �Ϻ� ��ȭ �Է�������
		money = JPY; //��� JPY ��ȭ�� ����
		printf("ȯ������ �ݾ�: %0.0f JPY\n", exchange_jpy(KRW, money));
		printf("�ѱ� �Ž�����: %d ��\n", change_jpy(KRW, exchange_jpy(KRW, money), money));
		//��ȭ�� ����� ȯ������ �ݾװ� �Ž�����
	}
	else { //�Ϻ� ��ȭ�� �ƴ� ���
		switch (code)
		{
		case 'u': case 'U':
			money = USD; //u �Ǵ� U(�̱��޷�)�� ��쿡 ��� USD �̱��޷��� ����
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
		printf("ȯ������ �ݾ�: %0.0f %s\n", exchange(KRW, money), country);
		printf("�ѱ� �Ž�����: %d ��\n", change(KRW, exchange(KRW, money), money));
		//��ȭ�� �ƴ� ����� ȯ������ �ݾװ� �Ž����� ���
	}
	getch();
	return 0;
}