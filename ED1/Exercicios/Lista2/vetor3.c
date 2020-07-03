#include <stdio.h>
#include <stdlib.h>
void append(int *vector, int local, int value){
    vector[local] = value;
}
int main(int argc, char const *argv[])
{
    int count, par = 0, impar = 0, num;
    scanf("%d", &count);
    int *arr = malloc((count+1)*sizeof(int));
    int *arrPar = malloc((count+1)*sizeof(int));
    int *arrImpar = malloc((count+1)*sizeof(int));

    for (int i = 0; i < count; i++){
        scanf("%d", &num);
        if(num%2==0){
            append(arrPar, par, num);
            par++;
        }
        else{
            append(arrImpar, impar, num);
            impar++;
        }
    }
    if (par == 0)
        printf("\n");
    
    for (int i = 0; i < par; i++)
        i+1!=par?printf("%d ", arrPar[i]):printf("%d\n", arrPar[i]);
    
    if (impar == 0)
        printf("\n");

    for (int i = 0; i < impar; i++)
        i+1!=impar?printf("%d ", arrImpar[i]):printf("%d\n", arrImpar[i]);

    free(arr);
    free(arrPar);
    free(arrImpar);
    
    return 0;
}
