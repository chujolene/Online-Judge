#include<stdio.h>
#include <time.h>

int P(int i){
    int n = i, count = 1;
    while(n != 1){
        if (n % 2 != 0){
            n = 3*n + 1;
            count++;
            //printf("%d ", n);
        }
        else{
            n = n / 2;
            count++;
            //printf("%d ", n);
        }
    }

    return count;
}


int main(){
    int a, b, A, B;

    while(scanf("%d %d", &a, &b) != EOF){
        A = a;
        B = b;

        int max = 0;
        //printf("Ans: \n");
        int temp; 
        if (a > b){
            temp = a;
            a = b;
            b = temp;
        }

        for (int i = b; i >= a; i--){
            //printf("\nnum: %d", i);
            //printf("\n");
            int count = P(i);
            if (count > max){
                max = count;
            }
        }
        
        //printf("\n");
        printf("%d %d %d\n", A, B, max);
    }
}