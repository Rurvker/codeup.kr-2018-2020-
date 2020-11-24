#include<stdio.h>
int main(){
    int a,i,sum=0;
    scanf("%d",&a);
    for(i=1;;i++){
    sum+=i; if(sum>=a){printf("%d",sum);break;}//이 반복문은 sum>=a일 때까지 반복된다.
    }
}
