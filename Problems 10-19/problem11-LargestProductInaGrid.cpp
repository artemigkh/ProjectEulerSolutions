//http://projecteuler.net/problem=11
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream>
using namespace std;

int main()
{
    //read into a 2d array from file
    string s;
    int nums[20][20];
    ifstream file("euler11input.txt");
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            file >> s;
            nums[i][j] = atoi(s.c_str());
        }
    }
    int max = 0;
    //negative slope diagonals
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++){
            int product = 1;
            for(int k = 0; k < 4; k++){
                product *= nums[i + k][j + k];
            }
            if(product > max) max = product;
        }
    }
    //positive slope diagonals
    for(int i = 19; i >= 4; i--){
        for(int j = 0; j < 16; j++){
            int product = 1;
            for(int k = 0; k < 4; k++){
                product *= nums[i - k][j + k];
            }
            if(product > max) max = product;
        }
    }
    //horizontals
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 16; j++){
            int product = 1;
            for(int k = 0; k < 4; k++){
                product *= nums[i][j + k];
            }
            if(product > max) max = product;
        }
    }
    //verticals
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 20; j++){
            int product = 1;
            for(int k = 0; k < 4; k++){
                product *= nums[i + k][j];
            }
            if(product > max) max = product;
        }
    }
    cout << max;
}

