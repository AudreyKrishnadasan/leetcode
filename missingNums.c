#include <stdio.h>

int missingNumber(int nums[], int numsSize){
    int sum = 0;
    int realSum = 0;
    for(int i = 0; i < numsSize; i++){ //calculate sum of all nums in correct array
        sum = sum + nums[i];
    }
    
    for (int i = 0; i < numsSize + 1; i++){ //finds the sum of the given array
        realSum = realSum + i;
    }
    
    int total = realSum - sum;
  
return total; //this is the answer, so for below values it will output a number 2
    
}

int main(void) {
    int nums[6] = {3,0,1,6,5,2};
    int numsSize=6;
        
int total =missingNumber(nums,numsSize); // different total!

printf("Output should be %d \n", total);
    
return 0;}

