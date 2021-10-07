#include<stdio.h>

void main()
{
    char s1[1000],s2[1000]; 
    //printf("random %s %s",s1,s2);
    int m,n;
    printf("Enter A string: \n");
    scanf("%[^\n]s",s1);
    printf("Enter number of characters which you want to copy: \n");
    scanf("%d",&m); 
    printf("Enter beginning position from which you want to copy: \n");
    scanf("%d",&n);
    for(int i=n-1, j=0;i<=m+n;i++,j++)
    {
        s2[j]=s1[i];
    }
    s2[m]='\0';
    printf("\nCopied string is: %s\n",s2);
} 
