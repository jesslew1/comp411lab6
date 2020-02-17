#include <stdio.h>


int num;
double triangular;
int main(){
    while(1){
        printf("Number ?\n");
        scanf(%d, &num);
        triangular = (num*(num+1)) / 2;
        if (num == 0) {
            printf("done");
            break;
        } else if (triangular == floor(triangular)){
            printf("%d is not a triangular number \n", num);
        } else {
            printf("%d is a triangular number \n", num);
        }
    }



}