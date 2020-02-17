#include <stdio.h>

int isTriangular(int numb) { 
    // Base case 
    if (numb < 0) 
        return 0; 
    // A Triangular number must be 
    // sum of first n natural numbers 
    int sum = 0; 
    for (int i = 1; sum <= numb; i++) { 
        sum+=i; 
        if (sum == numb) 
            return 1; 
    } 
    return 0; 
} 
int main(){
    int num;
    while(1) {
        printf("Number ?\n");
        scanf("%d", &num);
        if (num != 0) {
            if (isTriangular(num) == 0){
                printf("%d is not a triangular number\n", num);
            } else if (isTriangular(num) == 1){
                printf("%d is a triangular number\n", num);
            }
        } else if (num ==0){
            printf("Done\n");
            break;
        }
    }
}

