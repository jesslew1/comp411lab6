#include <stdio.h>
#include <math.h>

int num;
double triangular;
double floor(double x);
int main(){
    while(1){
        printf("Number ?\n");
        scanf("%d", &num);
        triangular = (num*(num+1)) / 2;
        if (num == 0) {
            printf("done");
            break;
        } else if (triangular == floor(triangular)){
            printf("%d is a triangular number \n", num);
        } else {
            printf("%d is a not triangular number \n", num);
        }
    }



}