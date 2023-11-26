#include<stdio.h>

int linear_search(int i, int n, int v, int *ar ){
    if(i == n)
        return -1; // value khuje pai nai
    if(ar[i] == v)
        return i;
    int res = linear_search(i + 1, n, v, ar);
    return res; // recursive call
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int q;
    scanf("%d", &q);
    for (int i = 0; i < q; i++){
        int v;
        scanf("%d", &v);
        // search korbo
        int res = linear_search(0, n, v, a);
        if (res == -1)
            printf("Not Found\n");
        else
            printf("%d", res);
    }
        return 0;
}
