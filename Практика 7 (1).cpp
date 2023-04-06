#include <iostream>
#include <stdio.h>
#include<string.h>
int main(){
    setlocale(LC_ALL,"Russian");
    char s1[1000];
    char s2[1000];
    printf("¬ведите s1\n");
    gets(s1);
    printf("¬ведите s2\n");
    gets(s2);
    char res[2000];
    int l = strlen(s2);
    char temp1[1000],temp2[1000],temp3[1000];
    for (int i=0;i<l/2;i++){
        temp1[i]=s2[i];
    }
    for (int i=0;i<strlen(s1);i++){
        temp2[i]=s1[i];
    }
    for (int i=l/2;i<l;i++){
        temp3[i-l/2]=s2[i];
    }
    char ans[3000];
    strcat(ans,temp1);
    strcat(ans,temp2);
    strcat(ans,temp3);
    printf("%s",ans);
}
