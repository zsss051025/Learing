#include<stdio.h>
#include<string.h>
int main()
{
	int balance = 0;
	char arr[255];
	fgets(arr,sizeof(arr)/sizeof(char),stdin);
	
	for(int i=0;arr[i] != '@' ;i++) {
		if(arr[i] == '(') {
			balance++; 
		} 
		if(arr[i] == ')') {
			balance--;
		}
		
		
		if(balance < 0) {
            break;
        }
	}
	
	if(balance == 0 ) {
		printf("YES");
	} else {
		printf("NO");
	}
	
	return 0;
}
