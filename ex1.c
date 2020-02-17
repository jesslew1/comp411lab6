#include <stdio.h>
#include <math.h>

int main(){
    int num;
    double triangle;
    double floor(double number);
    double ceil(double x);
    while(1){
        printf("Number ?\n");
        scanf("%d", &num);
        triangle = (num*(num+1)) / 2;
        double resultf = floor(triangle);
        double resultc = ceil(triangle);
        if (num == 0) {
            printf("done");
            break;
        } else if (triangle == resultf || triangle == resultc){
            printf("%d is a triangular number \n", num);
        } else if (triangle != resultf || triangle != resultc){
            printf("%d is a not triangular number \n", num);
        }
    }


}