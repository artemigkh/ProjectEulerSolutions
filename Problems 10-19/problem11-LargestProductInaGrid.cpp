//http://projecteuler.net/problem=11
#include <iostream>
#include <ifstream>
using namespace std;

int main()
{
    //read into a 2d array from file
    int nums[20][20];
    ifstream file("euler11input.txt");
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 20; j++){
            nums[i][j] << file;
        }
    }
}

