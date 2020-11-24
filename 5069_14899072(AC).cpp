#include <bits/stdc++.h>
int main()
{
	 char a[260]={0,};
	 int i,b=0,g=0;
	 fgets(a,sizeof(a),stdin);
	 for(i=0;i<260;i++)
	 if(a[i]==':'&&a[i+1]=='-'){if(a[i+2]=='(')b++;else if(a[i+2]==')')g++;}
	 if(b==0&&g==0)
	 printf("none");
	 else if(b==g)
	 printf("unsure");
	 else if(b>g)
	 printf("sad");
	 else if(b<g)
	 printf("happy");
}

