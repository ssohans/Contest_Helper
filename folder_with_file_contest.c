/**********************************************************/
/**            Bismillahir-rahmanir-rahim                **/
/**  In the name of Allah, the Beneficent, the Merciful. **/
/**********************************************************/
/*author: Sayed Sohan, CSE 13th batch(2016), MBSTU*/
/**status : Create a folder and file using C++ */

#include <stdio.h>
int x = 65;


int main()
{
    char s[200];
    printf("Enter the folder name: \n");
    gets(s);
    _mkdir(s);
    printf("How many problems max(26): \n");
    int l;
    scanf("%d",&l);
   // printf("%s",ss);
    int i;
    printf("If you don't have template in same directory press 0 else press anything\n");
    int temp;
    scanf("%d",&temp);
    if(temp==0){
        for(i = 0;i<l;i++){
            char l[5];
            char ss[20];
            strcpy(ss,s);
            strcat(ss,"/");
            l[0] = (char)(x+i);
            l[1] = '\0';
            strcat(ss,l);
            strcat(ss,".cpp");
            FILE* fp = fopen(ss,"w");
            fclose(fp);
        }
    }
    else{
        char t[100];
        printf("put temp file in same folder and enter name with extension (ex. temp.cpp) \n");
        scanf("%s",t);
        for(i = 0;i<l;i++){
            char l[5];
            char ss[20];
            strcpy(ss,s);
            strcat(ss,"/");
            l[0] = (char)(x+i);
            l[1] = '\0';
            strcat(ss,l);
            strcat(ss,".cpp");
            FILE* te = fopen(t,"r");
            FILE* fp = fopen(ss,"w");
            char a ;
            do {
                a = fgetc(te);
                fputc(a, fp);
            } while (a != EOF);
            fclose(fp);
            fclose(te);
        }

    }

    return 0;
}

