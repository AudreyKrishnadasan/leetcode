#include <stdio.h>

int hammingWeight(uint32_t n) {
    int numOnes = 0;
    uint32_t mask = 1;

    for(int i = 0; i < 32; i ++){
        if((n & mask) != 0){
            numOnes++;
        }
            mask <<= 1;
    }
        
    return numOnes;
}


int main (void){
    return 0;
}
