#include<stdio.h>
#include<stdlib.h>
union s_type{
	double number;
	char digits[8];
};
void print(union s_type *x);

int main(){
	union s_type x;
	x.number=8.369852;
	print(&x);
	FILE *fp;
	fp=fopen("digit.txt","w");
	if(fp==NULL) exit(1);
	for(int i=0; i<8; i++){
		fputc(x.digits[i],fp);
		if(ferror(fp)) exit(2);
	}
		
	fclose(fp);

	//now do the opposite
	fp=fopen("digit.txt","r");
	if(fp==NULL)exit(1);

	int i=0;
	union s_type y;
	while(!feof(fp)){
		if(i>=8) break;
		y.digits[i]=fgetc(fp);
		i++;
		if(ferror(fp))exit(1);
	}
	fclose(fp);
	printf("The number: %lf\n",y.number);
return 0;
}

void print(union s_type *x){
	printf("The number: %lf\n",(*x).number);
	printf("%d\n",(*x).digits[0]);
	printf("%d\n",(*x).digits[1]);
	printf("%d\n",(*x).digits[2]);
	printf("%d\n",(*x).digits[3]);
	printf("%d\n",(*x).digits[4]);
	printf("%d\n",(*x).digits[5]);
	printf("%d\n",(*x).digits[6]);
	printf("%d\n",(*x).digits[7]);
}
