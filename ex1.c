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
// int triangularNumber (double triangle){
    
//     return triangle;
// }
 static bool isTriangular(int num) { 
        // Base case 
        if (num < 0) 
            return false; 
        // A Triangular number must be 
        // sum of first n natural numbers 
        int sum = 0; 
        for (int n = 1; sum <= num; n++) { 
            sum = sum + n; 
            if (sum == num) 
                return true; 
        } 
        return false; 
    } 
int main(){
    int num;
    double triangle;
    // double floor(double number);
    // double ceil(double x);
    while(1) {
        printf("Number ?\n");
        scanf("%d", &num);
        if (num == 0) {
            printf("Done");
            break;
        } else if (isTriangular(num) == true){
            printf("%d is a triangular number \n", num);
        } else if (isTriangular(num) != true){
            printf("%d is not a triangular number \n", num);
        }
        // for (int i = 1; i < num; i++){
        //     triangle +=i;
        //     if (num == triangle){
        //         printf("%d is a triangular number \n", num);
        //         break;
        //     }
        // }
        // if (num != triangle){
        //     printf("%d is not a triangular number \n", num);
        // }
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
