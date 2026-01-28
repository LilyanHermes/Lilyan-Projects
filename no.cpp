#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>
using namespace std;

void getRandomArray(int array[], int size) {
    int min = 0, max = 1000000; // or whatever bounds you wish
    for(int i = 0; i < size; i++) {
        array[i] = rand()%(max+1 - min) + min;
    }
}

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[high]);
    return i + 1;
}

void quicksort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quicksort(array, low, pi - 1);
        quicksort(array, pi + 1, high);
    }
}

void shellSort(int array[], int size) {
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

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main() {
    srand(time(0));

    // Creating identical arrays
    const int SIZE = 20;
    int array1[SIZE], array2[SIZE], array3[SIZE];
    getRandomArray(array1, SIZE);
    for (int i = 0; i < SIZE; i++) {
        array2[i] = array1[i];
        array3[i] = array1[i];
    }

    // Output original unsorted arrays
    cout << "Original Unsorted Arrays:" << endl;
    cout << "Array 1: ";
    printArray(array1, SIZE);
    cout << "Array 2: ";
    printArray(array2, SIZE);
    cout << "Array 3: ";
    printArray(array3, SIZE);
    cout << endl;

    // Sorting and timing arrays with 20 elements
    clock_t start, end;
    double milli_time;

    start = clock();
    quicksort(array1, 0, SIZE - 1);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Quicksort (20 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    shellSort(array2, SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Shell's Sort (20 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    insertionSort(array3, SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Insertion Sort (20 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    cout << endl;

    // Timing sorting of arrays with 100,000 elements
    const int LARGE_SIZE = 100000;
    int largeArray1[LARGE_SIZE], largeArray2[LARGE_SIZE], largeArray3[LARGE_SIZE];
    getRandomArray(largeArray1, LARGE_SIZE);
    for (int i = 0; i < LARGE_SIZE; i++) {
        largeArray2[i] = largeArray1[i];
        largeArray3[i] = largeArray1[i];
    }

    start = clock();
    quicksort(largeArray1, 0, LARGE_SIZE - 1);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Quicksort (100,000 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    shellSort(largeArray2, LARGE_SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Shell's Sort (100,000 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    insertionSort(largeArray3, LARGE_SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Insertion Sort (100,000 elements): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    cout << endl;

    // Timing sorting of arrays that are already sorted
    int sortedArray[LARGE_SIZE];
    for (int i = 0; i < LARGE_SIZE; i++) {
        sortedArray[i] = i + 1;
    }

    start = clock();
    quicksort(sortedArray, 0, LARGE_SIZE - 1);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Quicksort (sorted array): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    shellSort(sortedArray, LARGE_SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Shell's Sort (sorted array): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    start = clock();
    insertionSort(sortedArray, LARGE_SIZE);
    end = clock();
    milli_time = 1000.0 * (end - start) / CLOCKS_PER_SEC;
    cout << "Insertion Sort (sorted array): " << fixed << setprecision(2) << milli_time << " milliseconds" << endl;

    return 0
