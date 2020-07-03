#include<stdio.h>
void ruler(int n) {
    if(n == 0)
        return;
    else{
        ruler(n-1);
        printf(".");
        for (int i = 0; i < n; i++)
            printf("-");
        printf("\n");
        ruler(n-1);
    }
}

int main(int argc, char const *argv[]){
    int x;
    scanf("%d", &x);
    ruler(x);
    return 0;
}
