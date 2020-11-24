#include<stdio.h>
 #define k 7368787
 int chk[k], cnt = 1;
 void so(int n);
 int main() {
     //freopen("input.txt", "r", stdin);
     //freopen("output.txt", "w", stdout);
     
     int n;
     scanf("%d", &n);
     so(n);

     return 0;
 }
 void so(int n) {
     if (n == 1)
         printf("2");
     else
         for (int i = 3;; i += 2) {
             if (!chk[i]) {
                 for (int j = i * 2; j < k; j += i)
                     chk[j] = 1;
                 cnt++;
                 if (cnt == n) {
                     printf("%d", i);
                     return;
                 }
             }
         }
 }
