bool criterio(int a, int b){
    
    return a.first < b.first;
}

int arr[] = {7, 5, 9, 8};

sort(arr, arr+4, criterio); // [9, 8, 7, 5]
