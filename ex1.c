#include <stdio.h>
// #include <math.h>

// int doubleToInt(double numb){
//     if(numb < 0) {
//         return (int)numb - 1;
//     }
//     else {
//         return (int)numb;
//     }
// }
int main(){
    int num;
    double triangle;
    // double floor(double number);
    // double ceil(double x);
    while(1){
        printf("Number ?\n");
        scanf("%d", &num);
        for (int i = 1; i < num; i++){
            triangle +=i;
            if (num == 0) {
                printf("Done");
                break;
            } else if (num == triangle){
                printf("%d is a triangular number \n", num);
            } else if (num != triangle){
                printf("%d is a not triangular number \n", num);
            }
        }
        // double resultf = doubleToInt(triangle);
        // double resultc = ceil(triangle);
        // if (num == 0) {
        //     printf("Done");
        //     break;
        // } else if (num == triangle){
        //     printf("%d is a triangular number \n", num);
        // } else if (num != triangle){
        //     printf("%d is a not triangular number \n", num);
        // }
    }
}
