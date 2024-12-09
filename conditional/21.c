// Read four integer values A, B, C, and D. Then, if B is greater
// than C and D is greater than A and if the sum of C and D is greater
// than the sum of A and B, and if C and D are positive values and A
// is even, print YES; otherwise, print NO.

#include<stdio.h>

int main()
{
    int A,B,C,D;
    printf("Enter these values: \n");
    scanf("%d %d %d %d", &A, &B, &C, &D);
    
    if( B > C && D > A && (C+D) > (A+B) && C > 0 && D > 0 && A % 2 == 0){
     		printf("YES");
             } else{
             printf("NO");
             }
    return 0;
}