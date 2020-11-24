#include <bits/stdc++.h>
typedef struct node{
    int data;
    struct node *next;
}node;
int main()
{
    int n,k,i,j;
    scanf("%d%d%d",&n,&k);

    node *head;
    head=(node*)malloc(sizeof(node));
    head->data=1;
    node *cur;
    cur=head;
    for(int i=2;i<=n;i++)
    {
        cur->next=(node*)malloc(sizeof(node));
        cur=cur->next;
        cur->data=i;
    }
    cur->next=head;
    node *prev = cur;

    cur = head;
    for(int i=1;i<1;i++){
        prev=cur;
        cur=cur->next;
    }
        prev->next=cur->next;
        free(cur);

    for(int j=1;j<n;j++){
        for(int i=0;i<k;i++)
        {
            prev=cur;
            cur=cur->next;
        }
        if(j==n-1)
        printf("%d ",cur->data);
        prev->next=cur->next;
        free(cur);
    }
}

