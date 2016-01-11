#include <stdio.h>
    int main(){
    int hoge=5,piyo=10,*hoge_p;//*hoge_p:指向int的指针类型的变量hoge_p

        printf("%d\n",*hoge_p);//1
        printf("%d\n",hoge);//5
        printf("%d\n",hoge_p);//1464202560

        /*地址运算符&*/
        printf("%p\n",&hoge);//0x7fff5745f45c
        printf("%p\n",&piyo);//0x7fff5745f458
        printf("%p\n",&hoge_p);//0x7fff5745f450

        /*将hoge的地址赋给指针变量hoge_p, hoge_p的值变成了hoge的地址 */
        hoge_p=&hoge;//
        printf("%p\n",hoge_p);//0x7fff5745f45c

        /*解引用的'*'输出hoge的值*/
        printf("%d\n",*hoge_p);//5

        /*修改*hoge_p的值*/
        *hoge_p=10;
        printf("%d\n",hoge);//10
        /*hoge_p依然保存的是hoge的地址*/
        printf("%p\n",hoge_p);//0x7fff5745f45c

    return 0;

}
