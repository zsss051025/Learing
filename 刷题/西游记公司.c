#include <stdio.h>

int main(void)
{
	int hour1, min1, sec1,	//��˽�Ŀ�ʼʱ��
	    hour2, min2, sec2;	//����յĿ�ʼʱ�䣬����˽�Ľ���ʱ��
	int time1,		//��˽�Ŀ�ʼʱ�任�����
	    time2;		//��˽�Ľ���ʱ�任�����
	int num;		//ÿ����͵�ıʼǱ���
	long long n;		//��˽���͵ɳ���бʼǱ��ĸ���

	scanf("%d:%d:%d", &hour1, &min1, &sec1);
	scanf("%d:%d:%d", &hour2, &min2, &sec2);
	scanf("%d", &num);

	time1 = hour1 * 3600 + min1 * 60 + sec1;
	time2 = hour2 * 3600 + min2 * 60 + sec2;

	n = (long long)num * (time2 - time1);

	printf("%lld\n", n);

	return 0;
}




