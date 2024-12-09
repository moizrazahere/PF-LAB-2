#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PLAYER_SYMBOL 'P'
#define ITEM 'I'
#define OBSTACLE 'X'
#define EMPTY ' '

void setupGrid(char grid[5][5], int *playerRow, int *playerCol) {
    *playerRow = *playerCol = 0;
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            grid[row][col] = EMPTY;
        }
    }
    grid[*playerRow][*playerCol] = PLAYER_SYMBOL;
    grid[1][1] = ITEM;
    grid[2][3] = ITEM;
    grid[3][4] = ITEM;
    grid[1][3] = OBSTACLE;
    grid[3][2] = OBSTACLE;
    grid[4][1] = OBSTACLE;
}

void showGrid(char grid[5][5]) {
    for (int row = 0; row < 5; row++) {
        for (int col = 0; col < 5; col++) {
            printf("%c ", grid[row][col]);
        }
        printf("\n");
    }
}

void updatePlayerPosition(char grid[5][5], int *playerRow, int *playerCol, char direction, int *collectedItems) {
    int targetRow = *playerRow;
    int targetCol = *playerCol;

    if (direction == 'W' || direction == 'w') targetRow--;
    else if (direction == 'S' || direction == 's') targetRow++;
    else if (direction == 'A' || direction == 'a') targetCol--;
    else if (direction == 'D' || direction == 'd') targetCol++;

    if (targetRow < 0 || targetRow >= 5 || targetCol < 0 || targetCol >= 5) {
        printf("Out of bounds! Try a different direction.\n");
        return;
    }
    if (grid[targetRow][targetCol] == OBSTACLE) {
        printf("Blocked by obstacle!\n");
        return;
    }

    if (grid[targetRow][targetCol] == ITEM) {
        (*collectedItems)++;
        printf("Collected an item! Total items: %d\n", *collectedItems);
    }

    grid[*playerRow][*playerCol] = EMPTY;
    *playerRow = targetRow;
    *playerCol = targetCol;
    grid[*playerRow][*playerCol] = PLAYER_SYMBOL;
}
int main() {
    char grid[5][5];
    int playerRow, playerCol, itemsCollected = 0;
    char moveCommand;

    setupGrid(grid, &playerRow, &playerCol);

    while (1) {
        showGrid(grid);
        printf("Items Collected: %d\n", itemsCollected);
        printf("Move (W/A/S/D) or Quit (Q): ");
        scanf(" %c", &moveCommand);

        if (moveCommand == 'Q' || moveCommand == 'q') {
            printf("Game Over! Items collected: %d\n", itemsCollected);
            break;
        }

        updatePlayerPosition(grid, &playerRow, &playerCol, moveCommand, &itemsCollected);
    }

    return 0;
}