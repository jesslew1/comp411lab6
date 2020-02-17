#include <stdio.h>
#include <math.h>

int main(){
    
    while(1){
        int num;
        double triangle;
        printf("Number ?\n");
        scanf("%d", &num);
        triangle = (num*(num+1)) / 2;
        int resultf = floor(triangle);
        int resultc = ceil(triangle);
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