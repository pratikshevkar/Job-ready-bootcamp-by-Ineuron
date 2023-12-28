/*
Write printf statement to print fillowing on screen consider int a=5, b=6
Output

1. 5 6
Ans.  printf("%d %d", a, b);

2. a=5 and b=6
Ans. printf("a=");
    printf("%d\n", a);
    printf("b=");
    printf("%d", b);

         OR
    printf("a=%d and b=%d", a,b);

    

3. a=6 and b=5
Ans. int a=5, b=6;
    printf("a=");
    printf("%d\n", b);
    printf("b=");
    printf("%d", a);

        OR

    printf("a=%d and b=%d", b,a);

4. value of a is 5 and value of b is 6
Ans. printf("value of a is %d ", a);
    printf("and value of b is %d", b);
             
             OR

  printf("value of a is %d and value of b is %d ", a, b);
            
    
5. Sum of 5 and 6 is 11
Ans. printf("sum of %d and %d is %d ", a, b, sum);

6. 5+6=11
Ans. printf("%d+%d=%d", a,b,sum);
*/

#include <stdio.h> 

int main() {
    int a=5, b=6;
    int sum= 5+6;
    printf("%d+%d=%d", a,b,sum);

    return 0;
}