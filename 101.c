#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n == 1000000)           //����7λ��������
    {
        printf("106");
    }
    else
    {
        int a[7];           //�������ֽ⡣
        a[0] = n / 100000;
        a[1] = n / 10000 % 10;
        a[2] = n / 1000 % 10;
        a[3] = n / 100 % 10;
        a[4] = n / 10 % 10;
        a[5] = n % 10;
        int b[7];         //��Ŷ���������
        int i;            //��ʱ��0��Ϊż��1��Ϊ�档
        for (i = 0; i < 6; i++)
        {
            if (a[i] % 2 == 0)
            {
                b[i] = 0;
            }
            else
            {
                b[i] = 1;
            }
        }
        int c[7] = { 0,1,0,1,0,1 };
        for (i = 0; i < 6; i++)
        {
            if (b[i] == c[i])
            {
                b[i] = 1;
            }
            else
            {
                b[i] = 0;
            }
        }
            int sum = 0;
            int n = 32;
            for (i = 0; i < 6; i++)
            {
                sum += (b[i] * n);
                n /= 2;
             }
            printf("%d\n", sum);
    }
            
	return 0;
}