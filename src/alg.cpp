// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int counter = 0;
    int ind, i = 0, j = size-1, mid = 0, midVal;
    while (i < j)
    {
        mid = (j + i) / 2;
        midVal = arr[mid];
        if (value < midVal) {
            j = mid - 1;
        }
        else if (midVal < value) {
            i = mid + 1;
        }
        else {
            break;
        }
    }
    ind = mid;
    int lastInd = ind;
    while (arr[ind] == value) {
        counter++;
        ind++;
    }
    ind = lastInd - 1;
    while (arr[ind] == value) {
        counter++;
        ind--;
    }
    return counter;
}
