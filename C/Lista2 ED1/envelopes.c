#include <stdio.h>
#include <string.h>
void numEnvelope(int count, int balas);
int main(){
    int rotulos, balas;
    scanf("%d %d", &rotulos, &balas);
    numEnvelope(rotulos, balas);
    return 0;
}
void numEnvelope(int count, int maior){
    int envelope[1000001], array[1001];
    for (int i = 0; i < count; i++){
        scanf("%d", &envelope[i]);
    }
    array[0]=maior;
    for (int i = 0; i < count; i++) {
		for (int j = 0; j < count; j++) {
			if (envelope[j] > envelope[i]){
				int tmp = envelope[i];         
				envelope[i] = envelope[j];            
				envelope[j] = tmp;             
			}  
		}
	}

    for (int i = 0; i < count; i++){
        for (int i = 0; i < count; i++){
            if (enve)
            {
                /* code */
            }
            
        }
    }
    
}
