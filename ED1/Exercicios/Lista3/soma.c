#include<stdio.h>
int somaDig(long int num, long int sum, long int div){
    if (num/div == 0) {
        return sum;
    }
    else {
        sum += (num/div)%10;
        return somaDig(num, sum, div*10);
    }   
    
}
int main(int argc, char const *argv[])
{   
    long int x;
    scanf("%ld", &x);
    printf("%ld\n", somaDig(x, 0, 1));
    return 0;
}
