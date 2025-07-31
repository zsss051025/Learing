#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a = '0',b = '0',c = '0';
	char arr[300];
	fgets(arr,sizeof(arr)/sizeof(char),stdin);
	
	for(int i=0;i<255;i++)
	{
		if(i+3<strlen(arr)) {
			if((arr[i] == 'a'|| arr[i] == 'b' || arr[i] == 'c') && (arr[i+1] == ':') && (arr[i+2] == '=')) {
				if(arr[i] == 'a' && (arr[i+3] >= '0' && arr[i+3] <= '9')) {//赋的是个数值 
					a = arr[i+3];
				} else if(arr[i] == 'a' && arr[i+3] == 'c') {
					a=c;
				} else if(arr[i] == 'a' && arr[i+3] == 'b') {
					a=b;
				}
				
				if(arr[i] == 'b' && (arr[i+3] >= '0' && arr[i+3] <= '9')) {//赋的是个数值 
					b = arr[i+3];
				} else if(arr[i] == 'b' && arr[i+3] == 'c') {
					b=c;
				} else if(arr[i] == 'b' && arr[i+3] == 'a') {
					b=a;
				}
				
				if(arr[i] == 'c' && (arr[i+3] >= '0' && arr[i+3] <= '9')) {//赋的是个数值 
					c = arr[i+3];
				} else if(arr[i] == 'c' && arr[i+3] == 'a') {
					c=a;
				} else if(arr[i] == 'c' && arr[i+3] == 'b') {
					c=b;
				}
			}			
		}
			

	}
	
	printf("%c %c %c",a,b,c);
}
