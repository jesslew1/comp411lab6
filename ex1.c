// #include <stdio.h>
// #include <math.h>

// int main(){
//     int num;
//     double triangle;

//     while(1){
//         printf("Number ?\n");
//         scanf("%d", &num);
//         triangle = (num*(num+1)) / 2;
//         int resultf = floor(triangle);
//         int resultc = ceil(triangle);
//         if (num == 0) {
//             printf("done");
//             break;
//         } else if (triangle == resultf || triangle == resultc){
//             printf("%d is a triangular number \n", num);
//         } else if (triangle != resultf || triangle != resultc){
//             printf("%d is a not triangular number \n", num);
//         }
//     }



// }
#include <stdio.h>
#include <math.h>
int main()
{
   double num = -8.33;
   int result;
   result = floor(num);
   printf("Floor integer of %.2f = %d", num, result);
   return 0;
}