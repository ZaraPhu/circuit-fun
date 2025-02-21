#include<stdio.h>

int main() {
  int rows;
  int columns;
  printf("Enter the number of rows for the test grid:");
  scanf("%d", &rows);
  printf("Enter the number of columns for the test grid:");
  scanf("%d", &columns);

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      printf("");
    }
  }

  return 0;
}
