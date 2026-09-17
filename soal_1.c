#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
long long A, sum= 0;
scanf ("%d",&n);
for(int i= 0; i<n; i++){
    scanf("%lld",&A);
    sum= sum + A;
    
}
if (sum<0){
    sum=-sum;
}
printf("%lld\n", sum);
    return 0;
}
