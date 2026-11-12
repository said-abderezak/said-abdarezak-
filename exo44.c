#include <stdio.h>
    
    int main() {
        int N, i, j, k, sum, count = 0;
        int prime, first;
    
        printf("Enter N: ");
        scanf("%d", &N);
    
        for (i = 2; i < N; i++) {
            sum=0;
            first=1;
    
            for (j = i; j < N; j++) {
                prime=1;
    
                if (j < 2) {
                    prime=0;
                }
    
                for (k = 2; k * k <= j; k++) {
                    if (j%k==0) {
                        prime=0;
                        break;
                    }
                }
    
                if (prime==1) {
                    sum=sum+j;
    
                    if (sum > N) {
                        break;
                    }
    
                    if (sum == N){
                        printf("%d = ", N);
    
                        for (k = i; k <= j; k++) {
                            int p = 1;
    
                            for (int d = 2; d * d <= k; d++) {
                                if (k % d == 0) {
                                    p = 0;
                                    break;
                                }
                            }
    
                            if (k >= 2 && p == 1) {
                                if (first == 0) {
                                    printf(" + ");
                                }
    
                                printf("%d", k);
                                first = 0;
                            }
                        }
    
                        printf("\n");
                        count++;
                        break;
                    }
                }
            }
        }
    
        printf("Total representations: %d\n", count);
    
        return 0;
    }
