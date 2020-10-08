#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int n,m,max=-10000000;
    scanf("%d%d",&n,&m);
    int a[502][502]={0};
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    max=a[1][1];
    for(int i=1;i<=n;i++){
        int b[502]={0};
        int d[502]={0};
        for(int j=i;j<=n;j++){
            for(int k=1;k<=m;k++){
                b[k]+=a[j][k];
                d[k]=b[k];
            }
            for(int ctr=1;ctr<=m;ctr++){
                if(ctr==1){
                    if(d[ctr]>max) max=d[ctr];
                }
                else if(d[ctr-1]<=0){ 
                    if(d[ctr]>max) max=d[ctr];
                }
                 else if(d[ctr-1]>0){
                    d[ctr]+=d[ctr-1];
                    if(d[ctr]>max) max=d[ctr];
                }
            }
        }
    }
    printf("%d\n",max);
}