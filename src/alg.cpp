// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
    int counter = 0;
    int ind = size / 2;
    int mid = arr[ind];
    while (value < mid) {
        ind /= 2;
        mid = arr[ind];
    }
    while (mid > value) {
        ind += ind / 2;
        mid = arr[ind];
    }
    int lastInd = ind;
    while (arr[ind] == value) {
        counter++;
        ind++;
    }
    ind = lastInd-1;
    while (arr[ind] == value) {
        counter++;
        ind--;
    }
    return counter;
}
