#include "sieve.h"

int sieve(int num){
    int limit = (int)(num*log(num)*1.15);
    int *arr = calloc(sizeof(int),limit);
    int count = 0;
    for (int i = 2; i < limit; i++){
        if (! arr[i]){
            count+=1;

            if (count == num){
                return i;
            }

            for (int j = i*2; j < limit; j+=i){
                if (!arr[j]){
                    arr[j]+=1;
                }
            }
        }
        
    }
    free(arr);
    return -1;
}
