#include <cstdio>
int main()
{
	int a,x,y;
	scanf("%d %d %d",&a,&x,&y);
	if(a%5==0)
	{
	    if(y>x+(90-a)/5)
	    printf("lose");
	    else if(y<x+(90-a)/5)
	    printf("win");
	    else
	    printf("same");
	}
	else
    {
        if(y>x+1+(90-a)/5)
        printf("lose");
        else if(y<x+1+(90-a)/5)
        printf("win");
        else
        printf("same");
    }

}

