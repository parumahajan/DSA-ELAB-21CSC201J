#include <stdio.h>
int read(int i){
    return 0;
}
void sol(){}
int main()
{   int MAXN,i,t,j,a;
    scanf("%d",&t);
    while(t--){
        int s[MAXN];
        int flag=0,oldflag=1,count=0;
        scanf("%d",&MAXN);
        for(i=0;i<MAXN;i++){
            scanf("%d",&s[i]);
        }
        for (i = 0; i < MAXN; ++i) 
        {
           for (j = i + 1; j < MAXN; ++j)
            {
                if (s[i] > s[j]) 
                {
                    a =  s[i];
                    s[i] = s[j];
                    s[j] = a;
                }
            }
        }
        read(s[i]);
        for(i=0;i<MAXN;i++){
            if(s[i-1]==s[i]){
                count=count+oldflag;
            }
            else{
                flag++;
                count=count+flag;
                oldflag=flag;
            }
        }
        printf("%d\n",count);
    }

    return 0;
}