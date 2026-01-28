#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

using namespace std;

int partition(int A[], int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j <= r - 1; j++) {
        if (A[j] <= x) {
            i++;
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    int temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return i + 1;
}

void quicksort(int A[], int p, int r) {
    if (p < r) {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}

void insertion_sort(int list[], int size) {
    int current, hold, walker;
    for (current = 1; current < size; current++) {
        hold = list[current];
        for (walker = current - 1; walker >= 0 && hold < list[walker]; walker--) {
            list[walker + 1] = list[walker];
        }
        list[walker + 1] = hold;
    }
}

void shellsort(int array[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = array[i];
            int j;
            for (j = i; j >= gap && array[j - gap] > temp; j -= gap) {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

void getRandomArray(int array[], int size) {
    int min = 0, max = 1000000;
    for (int i = 0; i < size; i++) {
        array[i] = rand() % (max + 1 - min) + min;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < min(size, 10); i++) {
        cout << array[i] << " ";
    }
    if (size > 10) {
        cout << "...";
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    const int size = 100000;
    int array1[size], array2[size], array3[size];

    getRandomArray(array1, size);
    copy(array1, array1 + size, array2);
    copy(array1, array1 + size, array3);

    cout << "Unsorted array 1: " << endl;
    printArray(array1, size);
    cout << "Unsorted array 2: " << endl;
    printArray(array2, size);
    cout << "Unsorted array 3: " << endl;
    printArray(array3, size);
    cout << endl;

    clock_t start, end;
    double milli_time;

    // Quick Sort
    start = clock();
    quicksort(array1, 0, size - 1);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Sorted array 1 using Quick Sort: " << endl;
    printArray(array1, size);
    cout << "Quick Sort CPU time used: " << fixed << setprecision(2) << milli_time << " ms" << endl;
    cout << endl;

    // Insertion Sort
    start = clock();
    insertion_sort(array2, size);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Sorted array 2 using Insertion Sort: " << endl;
    printArray(array2, size);
    cout << "Insertion Sort CPU time used: " << fixed << setprecision(2) << milli_time << " ms" << endl;
    cout << endl;

    // Shell Sort
    start = clock();
    shellsort(array3, size);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Sorted array 3 using Shell Sort: " << endl;
    printArray(array3, size);
    cout << "Shell Sort CPU time used: " << fixed << setprecision(2) << milli_time << " ms" << endl;

    return 0;
}
