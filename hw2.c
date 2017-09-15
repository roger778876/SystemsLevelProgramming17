#include <stdio.h>

int problem1() {
    int output = 0;
    int mult3 = 3;
    int mult5 = 5;
    
    for (mult3; mult3 < 1000; mult3 += 3){
        output += mult3;
    }
    for (mult5; mult5 < 1000; mult5 += 5){
        if ((mult5 % 3) != 0){
            output += mult5;
        }
    }
    return output;
}

int problem6() {
    
}

int main(){
    printf("%d\n", problem1());
}
