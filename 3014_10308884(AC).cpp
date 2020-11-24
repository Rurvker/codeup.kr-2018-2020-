﻿#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int n,cnt, quick[4500001];
void quicking(int i, int j)
{
	if(i>=j) return;
	int pivot = quick[(i+j)/2];
	int left = i;
	int right = j;
	
	while(left<=right)
	{
		while(quick[left]<pivot) left++;
		while(quick[right]>pivot) right--;
		if(left<=right)
		{
			swap(quick[left],quick[right]);
			left++; right--;
		}
	}
	quicking(i,right);
	quicking(left,j);
}

int main() 
{
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
		scanf("%d",&quick[i]);
	quicking(0,n-1);
	for(int j = 0; j < n; j++)
		printf("%d\n",quick[j]);
}
