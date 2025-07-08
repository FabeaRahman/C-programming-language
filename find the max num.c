
#include <stdio.h>

int main()
 {
    int r;
    scanf("%d", &r);  // Number of test cases

    for (int i = 0; i < r; i++)
        {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        // Find the maximum number among a, b, and c
        int max = a;

        if (b > max)
        {
            max = b;
        }
        if (c > max)
        {
            max = c;
        }

        printf("%d\n", max);  // Output the maximum number
    }

    return 0;
}
