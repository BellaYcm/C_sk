#include <stdio.h>
int main(){
    int x;
    double sum = 0;
    int cnt=0;
    int number[100];
    int i;
    scanf("%d",&x);
    while(x!=-1){
        number[cnt]=x;
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    int max;
    for(i=0;i<cnt;i++){
    if(number[i]>max){
         max=number[i];
    }
    }
        printf("%d",max);
    return 0;
}
