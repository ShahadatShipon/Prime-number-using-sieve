#include<stdio.h>
int prime[1000000];
int main()
{
    int i,j,k,range,count;
    while(scanf("%d",&range)!=EOF){
        if(range==1){
            count=0;
        }
        else{
            count=1;
        }
        for(i=3;i*i<=range;i+=2){
            if(prime[i]==0){
                for(j=i*i;j<=range;j+=(i*2)){
                    prime[j]=1;
                }
            }
        }
        for(i=3;i<=range;i+=2){
            if(prime[i]==0){
                count++;
            }
        }
        printf("%d\n",count);
    }
}


