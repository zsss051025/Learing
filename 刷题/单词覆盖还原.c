#include<stdio.h>
int main()
{
	char line[256];
	fgets(line,sizeof(line),stdin);
	
	int idx = 0;
	int boy_count = 0;
	int girl_count = 0; 
	while(line[idx] != '\n') 
	{
			if(line[idx] == 'b'|| line[idx+1] == 'o'||line[idx+2] == 'y' ) 
			{
				boy_count++;
		    }
			if(line[idx] == 'g'||line[idx+1] == 'i'||line[idx+2] == 'r'||line[idx+3] == 'l') 
			{
				girl_count++;
			}
		
		idx++; 
	}

	printf("%d\n",boy_count);
	printf("%d",girl_count);
	
	return 0;
}
