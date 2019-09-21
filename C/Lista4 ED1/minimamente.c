#include <stdio.h>
#include <stdlib.h>
void cleanBuffer();
int min(int *array, int count1, int total, int sum, int count2, int save[], int count3);
int main(int argc, char const *argv[]){
    int num[1000], total, count = 0, save[1000]={0};
    while(1){
        scanf("%d", &num[count]);
        if (num[count] == 0){
            scanf("%d", &total);
            min(num, count, total, 0, 0, save, 0);
            break;
        }
        count++;
    }
    return 0;
}

int min(int *array, int count1, int total, int sum, int count2, int save[], int count3){ 
    if (count2 < count1 && sum < total){
        sum+=array[count2];
        if (count2+1 == count1){
            for (int i = count3-1; i >= 0; i--){
                printf("%d\n", save[i]);
            }
        }
        return min(array, count1, total, sum, count2+1, save, count3);
    }
    else if (sum > total){
        save[count3]=array[count2-1];
        return min(array, count1, total, 0, count2, save, count3+1);
    }
    return 1;
}