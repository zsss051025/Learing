#include<stdio.h>
#include<string.h>
int main()
{
	char arr[201];
	int count = 0;
	fgets(arr,sizeof(arr),stdin);
	
	for(int i=0;i<strlen(arr);i++) {
		if(arr[i] == ' ' || arr[i] == 'a' || arr[i] == 'd' || arr[i] == 'g' || 
		   arr[i] == 'j' || arr[i] == 'm' || arr[i] == 'p' || arr[i] == 't' ||
		   arr[i] == 'w') {
		   	count++;
		   } else if(arr[i] == 'b' || arr[i] == 'e' || arr[i] == 'h' || arr[i] == 'k' || 
		   arr[i] == 'n' || arr[i] == 'q' || arr[i] == 'u' || arr[i] == 'x') {
		   		count+=2;
		   } else if(arr[i] == 'c' || arr[i] == 'f' || arr[i] == 'i' || arr[i] == 'l' || 
		   arr[i] == 'o' || arr[i] == 'r' || arr[i] == 'v' || arr[i] == 'y') {
		   		count+=3;
		   } else if(arr[i] == 's' || arr[i] == 'z' ) {
		   		count+=4;
		   }
	}
	
	printf("%d",count);
	
	
	return 0;
 } 
