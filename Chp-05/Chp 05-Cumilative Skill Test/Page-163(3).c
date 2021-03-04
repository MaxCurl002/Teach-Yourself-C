#include<stdio.h>
#include<string.h>
int main(){
	//spaces, commas and periods
	int count[3][1];
	char input[80];
	
	//initialize
	for(int i=0; i<3; i++) count[i][0]=0;

	fgets(input, sizeof(input), stdin);
	input[strcspn(input, "\n")]='\0';

	for(int i=0; i<strlen(input); i++){
		char c = input[i];
		switch (c){
			case ' ':
				count[0][0]++;
				break;
			case ',':
				count[1][0]++;
				break;
			case '.':
				count[2][0]++;
				break;
		}
	}

	printf("Spaces: %d\nCommas: %d\nPeriods: %d\n",count[0][0], count[1][0], count[2][0]);
return 0;
}
