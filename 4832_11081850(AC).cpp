#include <bits/stdc++.h>
int main()
{
    char A[5][16];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<15;j++)
        {
            A[i][j]=' ';//공백으로 배열 초기화
        }
    }
    for(i=0;i<5;i++)
    {
        scanf("%s",A[i]);//입력
    }
    for(j=0;j<15;j++)//세로 읽기
    {
        for(i=0;i<5;i++)
        {
            if(A[i][j]!=' '&&A[i][j]!=NULL)
            {
                printf("%c",A[i][j]);//공백이 아닐 때 출력
            }
        }
    }
	return 0;
}
