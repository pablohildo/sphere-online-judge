#include <stdio.h>

#define max(a, b) ((a) > (b)? (a) : (b))

int main()
{
    int x, y, l1, h1, l2, h2;
    scanf("%d %d %d %d %d %d", &x, &y, &l1, &h1, &l2, &h2);

    if      (max(l1, l2) <=x && h1+h2 <= y) printf("S\n");
    else if (max(l1, h2) <=x && h1+l2 <= y) printf("S\n");
    else if (l1+l2 <=x && max(h1, h2) <= y) printf("S\n");
    else if (l1+h2 <=x && max(h1, l2) <= y) printf("S\n");

    else if (max(h1, l2) <=x && l1+h2 <= y) printf("S\n");
    else if (max(h1, h2) <=x && l1+l2 <= y) printf("S\n");
    else if (h1+l2 <=x && max(l1, h2) <= y) printf("S\n");
    else if (h1+h2 <=x && max(l1, l2) <= y) printf("S\n");

    else printf("N\n");
    return 0;
}