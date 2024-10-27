#include <stdio.h>

int main() {
    int x, y;
    char direction;


    printf("Enter initial position (x y):");
    scanf("%d %d", &x, &y);
    printf("Enter direction U for Up, D for Down, L for Left, R for Right:");
    scanf(" %c", &direction);  

    
    while (x >= 1 && x <= 3 && y >= 1 && y <= 3) {
        if (direction == 'U' ) {
            y--;
        } else if (direction == 'D' ) {
            y++;
        } else if (direction == 'L' ) {
            x--;
        } else if (direction == 'R' ) {
            x++;
        }
    }

  
    printf("The player has reached the boundary at (%d,%d)\n", x, y);

    return 0;
}

