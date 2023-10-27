#include <stdio.h>
void x()
{
    if(0)printf("int findmax(int* Count)");
}
int main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char s[n],c[26]={0};
        scanf("%s",s);
        for(i=0;i<n;i++)
        {
            j=(int)s[i]-97;
            c[j]++;
        }
        j=0;
        for(i=0;i<26;i++)
        if(c[i]>j)
        j=c[i];

        printf("%d\n",j*2+1);

    }
    return 0;
}