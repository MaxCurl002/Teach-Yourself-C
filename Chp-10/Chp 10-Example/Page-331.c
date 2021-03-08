
#include<stdio.h>
#include<conio.h>
struct sample{
    unsigned a:1;
    unsigned b:1;
    unsigned c:1;
    unsigned d:1;};
union key_type{
    char ch;
    struct sample bits;
    }key;
int main(){
    printf("Strike a key");
    key.ch=getche();
    printf("\nBinary code is: ");
    if(key.bits.a) printf("1");
    else printf("0");
    if(key.bits.b) printf("1");
    else printf("0");
    if(key.bits.c) printf("1");
    else printf("0");
    if(key.bits.d) printf("1");
    else printf("0");


    }
