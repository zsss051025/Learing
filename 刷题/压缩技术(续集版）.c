#include<stdio.h>
#include<string.h>
int main()
{
	char line[201];
    fgets(line,sizeof(line),stdin);
	line[strcspn(line,"\n")] = '\0'; //strcspn������Ѱ��ĳֵ�����������������׸������ 
	int N = strlen(line);//��ȡ��һ�����ݣ�ȷ��N 
	
	char result[N*N+1];//+1Ϊ��������Ԥ��λ��
	int idx = 0;
	
	//����һ�ж�ȡ��result����
	for(int i=0;i<N;i++) {
		result[idx] = line[i];
		idx++;
	}
	//��ȡʣ�µ�N-1�� 
	for(int i=0;i<N-1;i++) {
		fgets(line,sizeof(line),stdin);
		line[strcspn(line,"\n")] = '\0';
		for(int j=0;j<N;j++) {
			result[idx] = line[j];
			idx++;
		} 
	}
	 
	int code[40001];//010101�������ΪN*N+1
	int idx2 = 0;
	code[idx2] = N; 
	
	char now_num;
	int count = 0;
	
    // ��ͳ������0��������1���������
    if (result[0] == '0') {
        // �׸��ַ���0��ֱ�ӿ�ʼͳ��0
        now_num = '0';
        count = 1;
    } else {
        // �׸��ַ���1���ȼ�¼0������0����ͳ��1
        code[idx2+1] = 0; // ����0�ĸ���Ϊ0
        idx2++;
        now_num = '1';
        count = 1;
    }
	
	for(int i=1;i<N*N;i++) {
		if(result[i] == now_num ) {
			count++;
		} else {
			idx2++;
			code[idx2] = count;
			now_num = result[i];
			count = 1; 
		}
	}
	idx2++;
	code[idx2] = count;//��Ϊֻ���жϵ�����ͬ���ֲŻ��¼�����γ��ȣ�
						//�������һ���޷���forѭ�����¼�������Ҫ�����¼ 
	for(int i=0;i<=idx2;i++) {
		printf("%d",code[i]);
		if(i != idx2) {
			printf(" ");
		}
	} 
	
	return 0;
}












