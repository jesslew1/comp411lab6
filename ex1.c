#include <stdio.h>
// #include <math.h>

int doubleToInt(double numb){
    if(numb < 0) {
        return (int)numb - 1;
    }
    else {
        return (int)numb;
    }
}
int main(){
    int num;
    double triangle = 0;
    // double floor(double number);
    // double ceil(double x);
    while(1){
        printf("Number ?\n");
        scanf("%d", &num);
        for (int i = 1; i < num; i++){
            triangle +=i;
        }
        // double resultf = doubleToInt(triangle);
        // double resultc = ceil(triangle);
        if (num == 0) {
            printf("Done");
            break;
        } else if (triangle == num){
            printf("%d is a triangular number \n", num);
        } else if (triangle != num ){
            printf("%d is a not triangular number \n", num);
        }
    }
}
