#include <stdio.h>
int main(){
    int n,m,k,x,y,i,ans=0,flag=1;
    scanf("%d %d %d",&n,&m,&k); 
    /* Reading input from STDIN */
    int a[100001]={0},b[100001]={0}; 
    /* initialize 2 arrays with 0 */
    for(i=0;i<n;i++){
        scanf("%d",&x);
         /* Reading input from STDIN */
         if(a[x]<k){
            ans++;
            a[x]++;
            }
            else if(flag!=0){
                y=x;
                x++;
                if(b[y]!=0)
                x=b[y];
                flag=0;
                while(x!=y) 
                /* while loop begin here */
                {
                    if(x==m+1)
                    x=1;
                    if(x==y)
                    break;
                    if(a[x]<k){
                        a[x]++;
                        flag=1;
                        b[y]=x;
                        break;
                        }
                        x++;
                        } 
                        /* wh ile loop ended here */
                        }
                        }
                        printf("%d",n-ans);
                        /* Writing output to STDOUT */
                        return 0;
                        }