#include <stdio.h>
#include<string.h>
    char dictionary[][2][40]={
    "Human", "Homo sapiens",
    "Box", "Its a box, Duh.",
    "Chair", "Where we sit",
    "String", "Stuff to make cloths.",
    "Honey", "Very tasty."};
int main(){
    int flag=0; //0 means - not found
    char word[80];
    fgets(word,sizeof(word),stdin);
    word[strcspn(word,"\n")]='\0';
    for(int i=0; strcmp(dictionary[i][0],"");i++) {
        if(strcmp(dictionary[i][0],word)==0){
            printf("%s Means %s\n",word,dictionary[i][1]);
	    flag=1;
            break;
        }
    }
    if(flag==0)
        printf("The word doesnt exist in dictionary.\n");
    return 0;
}
