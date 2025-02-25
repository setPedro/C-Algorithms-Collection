#include "../include/sorting.h"

void bubble_sort(int array[], int size) {
  int is_sorted = 0;
  int last_swap = size - 1;

  while (!is_sorted) {
    int swaps_made = 0;
    int new_last = last_swap;

    for (int i = 0; i < last_swap; i++) {
      int temp_a = array[i];

      if (temp_a > array[i + 1]) {
        swaps_made++;
        array[i] = array[i + 1];
        array[i + 1] = temp_a;
        new_last = i + 1;
      }
    }

    if (swaps_made > 0) {
      last_swap = new_last;
    }
    if (swaps_made == 0) {
      is_sorted = 1;
    }
  }
}
