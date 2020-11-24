#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include<stdio.h>
int main(){
	long long int k,n,count,count2=0,b=0;
	scanf("%d %d",&k,&n);
	long long int a[10001]={0};
	for(count=0; count<k;count++)
		scanf("%d",&a[count]);
		for(count=k;count<n;count++){
			for(count2;count2<count;count2++)
				a[count]+=a[count2];
			b++;
			count2=b;
		}
	printf("%lld",a[n-1]%100007);
}
