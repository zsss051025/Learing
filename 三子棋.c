#include<stdio.h>

int main()
{
	int arr[10] ={0};
	int flag=1;//1ʱСa�£�0ʱuim�� 
	char step[10];
	fgets(step,sizeof(step),stdin); 
	for(int i=0;i<9;i++) {//�ܹ��Ų� 
		if(flag == 1) {//Сa��,��������Ϊ1 
			if(step[i] == '1') {
				arr[0] = 1;
			} else if(step[i] == '2') {
				arr[1] = 1;
			} else if(step[i] == '3') {
				arr[2] = 1;
			} else if(step[i] == '4') {
				arr[3] = 1;
			} else if(step[i] == '5') {
				arr[4] = 1;
			} else if(step[i] == '6') {
				arr[5] = 1;
			} else if(step[i] == '7') {
				arr[6] = 1;
			} else if(step[i] == '8') {
				arr[7] = 1;
			} else if(step[i] == '9') {
				arr[8] = 1;
			}
			flag =0;//��umi�� 
		} else {//uim��,��������Ϊ2 
			if(step[i] == '1') {
				arr[0] = 2;
			} else if(step[i] == '2') {
				arr[1] = 2;
			} else if(step[i] == '3') {
				arr[2] = 2;
			} else if(step[i] == '4') {
				arr[3] = 2;
			} else if(step[i] == '5') {
				arr[4] = 2;
			} else if(step[i] == '6') {
				arr[5] = 2;
			} else if(step[i] == '7') {
				arr[6] = 2;
			} else if(step[i] == '8') {
				arr[7] = 2;
			} else if(step[i] == '9') {
				arr[8] = 2;
			}
			flag =1;//��Сa�� 				
		} 
	}

	
	int winner = 0;
	//���ж���û��Ӯ��
   if (arr[0] == arr[1] && arr[1] == arr[2] && arr[0] != 0) {
        winner = arr[0];
    } else if (arr[3] == arr[4] && arr[4] == arr[5] && arr[3] != 0) {
        winner = arr[3];
    } else if (arr[6] == arr[7] && arr[7] == arr[8] && arr[6] != 0) {
        winner = arr[6];
    }
    // ��������
    else if (arr[0] == arr[3] && arr[3] == arr[6] && arr[0] != 0) {
        winner = arr[0];
    } else if (arr[1] == arr[4] && arr[4] == arr[7] && arr[1] != 0) {
        winner = arr[1];
    } else if (arr[2] == arr[5] && arr[5] == arr[8] && arr[2] != 0) {
        winner = arr[2];
    }
    // �����Խ���
    else if (arr[0] == arr[4] && arr[4] == arr[8] && arr[0] != 0) {
        winner = arr[0];
    } else if (arr[2] == arr[4] && arr[4] == arr[6] && arr[2] != 0) {
        winner = arr[2];
    } 
	
	if(winner != 0) {
		if(winner == 1) {
			printf("xiaoa wins.");
		} else {
			printf("uim wins."); 
		}
	} else {
		printf("drew.");
	}
	
	
	return 0;
}


