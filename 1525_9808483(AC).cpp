#include <bits/stdc++.h>
int main(void)
{
    int arr[11][11], i, j, k, n;
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            scanf ("%d", &arr[i][j]);
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            if (arr[i][j] > 0){
                for (k=i-1; k>=i-arr[i][j]; k--){
                    if (k < 0){
                        break;
                    }
                    if (arr[k][j] > 0){
                        continue;
                    }
                    if (arr[k][j] == -1){
                        break;
                    }
                    arr[k][j] = -2;
                }
                for (k=j-1; k>=j-arr[i][j]; k--){
                    if (k < 0){
                        break;
                    }
                    if (arr[i][k] > 0){
                        continue;
                    }
                    if (arr[i][k] == -1){
                        break;
                    }
                    arr[i][k] = -2;
                }
                for (k=i+1; k<=i+arr[i][j]; k++){
                    if (k > 10){
                        break;
                    }
                    if (arr[k][j] > 0){
                        continue;
                    }
                    if (arr[k][j] == -1){
                        break;
                    }
                    arr[k][j] = -2;
                }
                for (k=j+1; k<=j+arr[i][j]; k++){
                    if (k > 10){
                        break;
                    }
                    if (arr[i][k] > 0){
                        continue;
                    }
                    if (arr[i][k] == -1){
                        break;
                    }
                    arr[i][k] = -2;
                }
                arr[i][j] = -2;
            }
        }
    }
    scanf ("%d", &n);
    int x[n + 1], y[n + 1];
    for (i=0; i<n; i++){
        scanf ("%d %d", &x[i], &y[i]);
        if (arr[x[i] - 1][y[i] - 1] != -2){
            arr[x[i] - 1][y[i] - 1] = i + 1;
        }
    }
    for (i=0; i<10; i++){
        for (j=0; j<10; j++){
            printf ("%d ", arr[i][j]);
        }
        puts("");
    }
    puts("Character Information");
    for (i=0; i<n; i++){
        printf ("player %d %s\n", i + 1, arr[x[i] - 1][y[i] - 1] == -2 ? "dead" : "survive");
    }
}
