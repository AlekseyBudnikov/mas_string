#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,index_i,index_j,first;
    int k=0,maxlen=0,b_1=0,b_2=0,b_3=0;

    char mas[][256]={"Hello","Worldmy Mine","Me aps","Dodge ViperGTISLK VW","SLK"};

    for(i=0;i<=4;i++)
    {
        for(j=0;j<=strlen(mas[i]);j++)
        {
            if((mas[i][j]!=' ') && (mas[i][j]!='\0'))
                k++;
            else
            {
                if(maxlen<k)
                {
                    maxlen=k;
                    index_i=i;
                    index_j=j;
                }
                if(k==1 && ((mas[i][j+1]!=' ') || (mas[i][j+1]!='\0')) && (j==0 || (mas[i][j-1]!=' ')))
                    b_1++;
                if(k==2 && ((mas[i][j+1]!=' ') || (mas[i][j+1]!='\0')) && (j==0 || (mas[i][j-2]!=' ')))
                    b_2++;
                if(k==3 && ((mas[i][j+1]!=' ') || (mas[i][j+1]!='\0')) && (j==0 || (mas[i][j-3]!=' ')))
                    b_3++;
                k=0;
            }
        }
    }

    first=index_j-maxlen;

    for(j=first;j<=index_j-1;j++)
        printf("%c",mas[index_i][j]);
    printf("\n");

    for(j=index_j-1;j>=first;j--)
        printf("%c",mas[index_i][j]);
    printf("\n\n");

    printf("1 - %d\n",b_1);
    printf("2 - %d\n",b_2);
    printf("3 - %d\n",b_3);

    return 0;
}
