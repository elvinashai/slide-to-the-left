#include "slide.hpp"

void arrayShift(int arr[], int size, int shifts) {
   shifts = shifts % size;

   for (int s = 0; s < shifts; s++) {
      int first = arr[0];

      for (int i = 0; i < size - 1; i++) {
         arr[i] = arr[i + 1];
      }

      arr[size - 1] = first;
   }
}

// Optional (for bonus)
void arrayShiftRight(int arr[], int size, int shifts) {
   shifts = shifts % size;

   for (int s = 0; s < shifts; s++) {
      int last = arr[size - 1];

      for (int i = size - 1; i > 0; i--) {
         arr[i] = arr[i - 1];
      }

      arr[0] = last;
   }
}
