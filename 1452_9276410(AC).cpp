#include <stdio.h>
#include <algorithm>
using namespace std;  //algorithm 헤더파일은 C++이기 때문에 써 주어야 합니다.
int main()
{
    int n,a[100000];
    scanf("%d",&n);  // 정렬할 수의 개수 입력
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);  //정렬할 수 입력
    sort(a,a+n);  //배열[0]부터 배열[n-1]까지 정렬
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);  //정렬한 수 출력
    return 0;
}
