#include<stdio.h>
#include<string.h>
int main()
{
	char line[201];
    fgets(line,sizeof(line),stdin);
	line[strcspn(line,"\n")] = '\0'; //strcspn类似于寻找某值并返回索引，返回首个满足的 
	int N = strlen(line);//读取第一行数据，确定N 
	
	char result[N*N+1];//+1为结束符号预留位置
	int idx = 0;
	
	//将第一行读取进result数组
	for(int i=0;i<N;i++) {
		result[idx] = line[i];
		idx++;
	}
	//读取剩下的N-1行 
	for(int i=0;i<N-1;i++) {
		fgets(line,sizeof(line),stdin);
		line[strcspn(line,"\n")] = '\0';
		for(int j=0;j<N;j++) {
			result[idx] = line[j];
			idx++;
		} 
	}
	 
	int code[40001];//010101交替最大为N*N+1
	int idx2 = 0;
	code[idx2] = N; 
	
	char now_num;
	int count = 0;
	
    // 先统计连续0，再连续1，交替进行
    if (result[0] == '0') {
        // 首个字符是0：直接开始统计0
        now_num = '0';
        count = 1;
    } else {
        // 首个字符是1：先记录0个连续0，再统计1
        code[idx2+1] = 0; // 连续0的个数为0
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
	code[idx2] = count;//因为只有判断到不相同数字才会记录连续段长度，
						//所以最后一段无法在for循环里记录，因此需要额外记录 
	for(int i=0;i<=idx2;i++) {
		printf("%d",code[i]);
		if(i != idx2) {
			printf(" ");
		}
	} 
	
	return 0;
}












