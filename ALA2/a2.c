#include <stdio.h>

int main()
{
    int A, B, C, D;

    // for user input x
    // compute 3x+5 and also 4x+9
    // if input was 4 program would be
    // answer1 is 17
    // answer2 is 25

    printf("Enter the value of x: ");
    scanf("%d", &A);
    B = 3;
    C = B * A;
    D = C + 5;
    printf("answer1 is %d\n", D);
    B = 4;
    C = B * A;
    D = C + 9;
    printf("answer2 is %d\n", D);

    // for user input x
    // print 1 of these messages
    // vote: yes
    // vote: no
    // based on rule that you must be at least 18 to vote
    // only 1 if statement & condition allowed

    printf("Enter your age: ");
    scanf("%d", &A);
    if (A >= 18)
        printf("vote: yes\n");
    if (A < 18)
        printf("vote: no\n");

    // for user input x
    // print numbers 1 to x; 1 number per line

    printf("Enter the value of x: ");
    scanf("%d", &A);
//    B = 1;
    if (A >= B)
        printf("1\n");
  //  B = 2;
    if (A >= B)
        printf("2\n");
    //B = 3;
    if (A >= B)
        printf("3\n");
    //B = 4;
    if (A >= B)
        printf("4\n");
    //B = 5;
    if (A >= B)
        printf("5\n");
    // add more lines if you want to support larger values of A

    // for user input x
    // print number 1 to X on 1 line with a space between
    // and the sum on the next line

    printf("Enter the value of x: ");
    scanf("%d", &A);
    B = 1;
    C = 1;
    if (A >= B)
        printf("1 ");
    //B = 2;
    if (A >= B)
        printf("2 ");
    if (A >= 2)
        C = C + 2;
    //B = 3;
    if (A >= B)
        printf("3 ");
    if (A >= 3)
        C = C + 3;
    //B = 4;
    if (A >= B)
        printf("4 ");
    if (A >= 4)
        C = C + 4;
    //B = 5;
    if (A >= B)
        printf("5 ");
    if (A >= 5)
        C = C + 5;
    // add more lines if you want to support larger values of A
    printf("\n");
    printf("%d\n", C);

    return 0;
}
