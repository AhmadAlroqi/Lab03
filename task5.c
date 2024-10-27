#include <stdio.h>

int main() {
    int N;
     int fa = 0, fe = 0, fi=0, fo = 0, fu = 0, fothers = 0;
    char ch;

    printf("Sample Output for N: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf(" %c", &ch);

        if (ch == 'a' || ch =='A') {
            fa++;
        } else if (ch == 'e'|| ch =='E') {
            fe++;
        } else if (ch == 'i'|| ch =='I') {
            fi++;
        } else if (ch == 'o'|| ch =='O') {
            fo++;
        } else if (ch == 'u'|| ch =='U') {
            fu++;
        } else {
            fothers++;
        }
    }

    printf("\nFrequency of a = %d\n", fa);
    printf("Frequency of e = %d\n", fe);
    printf("Frequency of i = %d\n", fi);
    printf("Frequency of o = %d\n", fo);
    printf("Frequency of u = %d\n", fu);
    printf("Frequency of others = %d\n", fothers);

    return 0;
}
