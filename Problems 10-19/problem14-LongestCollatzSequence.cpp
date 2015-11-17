//http://projecteuler.net/problem=14
#include <iostream>

int main(){
    const int MAX = 1000000;
    int lengthsSoFar[MAX]; //stores the lengths of already discovered sequences
    int largestSequence = 0;
    for(int i = 1; i < MAX; i++){
        int seqLength = 1;
        long int current = i;
        while(current != 1){
            if(current < i){
                seqLength += lengthsSoFar[current];
                break;
            }else if(current % 2 == 0){
                current /= 2;
            }else{
                current = 3 * current + 1;
            }
            seqLength++;
        }
        lengthsSoFar[i] = seqLength;
        if(seqLength > lengthsSoFar[largestSequence]) largestSequence = i;
    }
    std::cout << largestSequence;
}

