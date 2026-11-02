#include <stdio.h>

int main(void)
{
    int score;
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("NG");
        return 0;
    }

    if (score == 0)
    {
        printf("/");
        return 0;
    }

    if (score >= 90)
        printf("AA");
    else if (score >= 80)
        printf("A");
    else if (score >= 70)
        printf("B");
    else if (score >= 60)
        printf("C");
    else
        printf("D");

    return 0;
}