//http://www.patest.cn/contests/pat-b-practise/1002
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char x[101];
    int i,j=0;
    scanf("%s",&x);
    i=strlen(x);
    int sum;
    for(j=0;j<i;j++){
    int l=x[j]-48;
    sum=sum+l;
    }
    int tmp = 0;
    char array[10][5] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    	char result[10];
    	tmp = sum;
        	while(tmp/10 != 0){
        		result[j] = tmp % 10 + '0';
        		j++;
        		tmp /= 10;
        	}
        	result[j] = tmp%10 + '0';
        	printf("%s", array[result[j]-'0']);
        	for(i = j-1; i >= 0; i--)
        	{
        		printf(" %s", array[result[i]-'0']);
        	}

        	return 0;


}
