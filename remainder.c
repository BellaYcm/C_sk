//http://www.patest.cn/contests/pat-b-practise/1001
#include <stdio.h>
int main(){
    int i=0,x,y;
    scanf("%d",&x);
//    y=test(x);
//    while(y!=1){
//        y=test(y);
//        i++;
//    }
    i=test1(x,i);
    printf("%d",i);
}

//int test(int num){
//    if(num==1){
//        return 1;
//    }else{
//        if(num%2==0){
//            return num/2;
//        }else{
//            return (3*num+1)/2;
//        }
//    }
//}

int test1(int num,int j){
    if(num==1){
        return j;
    }else{
        j++;
        if(num%2==0){
            test1(num/2,j);
        }else{
            test1((3*num+1)/2,j);
        }
    }
}