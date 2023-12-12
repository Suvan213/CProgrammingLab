#include<stdio.h>
#include<string.h>
int main(){
    char[50];
    printf("enter the string");
    scanf("%[^\n]s",a);
    int l=strlen(a);
    int vow=0,con=0;
    for(int i=0;i<l;i++)
    {
        if a[i]( == 'a' ||  == 'e' ||  == 'i' ||  == 'o' ||  == 'u' ||  == 'A' ||  == 'E' || == 'I' ||  == 'O' ||   == 'U')
        vow++;
        else
        con++;
    }
    printf("the no of vowels are %d",vow);
    printf("the no of consonants are %d",con);
}
