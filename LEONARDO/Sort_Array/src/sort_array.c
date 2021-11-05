#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <unistd.h>
#include "get_opt.h"
#include "array.h"
#include "sort.h"

static const char *optString = "a:n:s:P";
clock_t start, end;
double elapsed_time;
int numberOfComparisons;
int numberOfSwaps;

int sort_array(int argc, char **argv) {
    int i, method, size, array_type, print_vector = 0;

    if(!check_opt(argc)){
        fprintf(stderr,"Not enough parameters\n");
        fprintf(stderr,"Expected: -a SORTTYPE -n ARRAYSIZE -s ARRAYSTATE [-P]\n");
        fprintf(stderr,"Please read the doc.\n");
        return 1;
    }

    get_opt(argc, argv, &method, &size, &array_type, &print_vector);

    // Create the vector with the specified size and situation
    int *vet = generate_array(size, array_type);

    if(!vet){
        fprintf(stderr,"Memory allocation failed.\n");
        return 1;
    }

    int *vet_aux = (int*)malloc(sizeof(int)*size);
    // Create a copy of the vector to print it berfore and after it is sorted in case this option is enabled
    for(i=0; i<size; i++){
        vet_aux[i] = vet[i];
    }
    // Sort the array
    sort_array(vet, size, method);

    printf("-- Analysis --\n\n");
    printf("Sorting algorithm: %s\n", get_method_name(method));
    printf("Array type: %s\n", get_array_type_name(array_type));
    printf("Array size: %d\n", size);
    /*
    if(method < GPUQUICK ){
        printf("Number of comparisons: %d\n", get_comparisons());
        printf("Number of swaps: %d\n", get_swaps());
    }
    */
    printf("Time elapsed: %f s\n", get_elapsed_time());
    if(print_vector){
        printf("Original: ");
        for(i=0; i<size; i++){
            printf("%d ", vet_aux[i]);
        }
        printf("\n\nSorted: ");
        for(i=0; i<size; i++){
            printf("%d ", vet[i]);
        }
    }
    free(vet);
    free(vet_aux);
    printf("\n\n");
    return 0;
}

void random_array(int *array, int size) {
    srand(time(NULL));
    int i;
    for(i = 0; i < size; i++) {
        array[i] = rand() % size;
    }
}

void ascending_array(int *array, int size) {
    int i;
    for(i = 1; i <= size; i++) {
        array[i] = i;
    }
}

void descending_array(int *array, int size) {
    int i, j;
    for(i = 0, j = size; i < size; i++, j--) {
        array[i] = j;
    }
}

void almost_ordered_array(int *array, int size) {
    srand(time(NULL));
    int ninety_percent_size = (int)size/10 * 9;
    int i = 0;
    for(i = 1; i <= ninety_percent_size; i++) {
        array[i] = i;
    }

    for(i = ninety_percent_size; i < size; i++) {
        array[i] = rand() % (size - ninety_percent_size) + ninety_percent_size;
    }
}

int* generate_array(int size, int organization) {
    int* array;
    array = (int*)malloc(size*sizeof(int));

    if(array){
        switch(organization) {
            case RANDOM_ORDER:
            random_array(array, size);
            break;
            case ASCENDING_ORDER:
            ascending_array(array, size);
            break;
            case DESCENDING_ORDER:
            descending_array(array, size);
            break;
            case ALMOST_ORDERED:
            almost_ordered_array(array, size);
            break;
        }
    }
    return array;
}

int check_opt(int argc){
    return argc > 6;
}

int get_sort_method(char method[]) {
    int selected_method;
    //printf("%d\n", selected_method);
    if(strcmp(method, "selection") == 0)
        selected_method = SELECTION;
    else if(strcmp(method, "insertion") == 0)
        selected_method = INSERTION;
    else if(strcmp(method, "shell") == 0)
        selected_method = SHELL;
    else if(strcmp(method, "quick") == 0)
        selected_method = QUICK;
    else if(strcmp(method, "heap") == 0)
        selected_method = HEAP;
    else if(strcmp(method, "merge") == 0)
        selected_method = MERGE;
/*        
    else if(strcmp(method, "gpuquick") == 0)
        selected_method = GPUQUICK;
    else if(strcmp(method, "gpumerge") == 0)
        selected_method = GPUMERGE;
*/        
    else
        selected_method = UNDEFINED;
    return selected_method;
}

int get_array_size(char sizeOpt[]) {
    int size = atoi(sizeOpt);
    if(size < 0) 
        size = UNDEFINED;
    return size;
}

int get_array_type(char type[]) {
    int selected_type;
    if(strcmp(type, "random") == 0)
        selected_type = RANDOM_ORDER;
    else if(strcmp(type, "ascending") == 0)
        selected_type = ASCENDING_ORDER;
    else if(strcmp(type, "descending") == 0)
        selected_type = DESCENDING_ORDER;
    else if(strcmp(type, "almost") == 0)
        selected_type = ALMOST_ORDERED;
    else
        selected_type = UNDEFINED;
    return selected_type;
}

void get_opt(int argc, char **argv, int *method, int *size, int *array_type, int *print_vector) {
    int opt = 0;
    opt = getopt(argc, argv, optString);
    //a:n:s:p
    while(opt != -1) {
        switch(opt) {
            case 'a': // algorithm
                *method = get_sort_method(optarg);
                break;

            case 'n': // number of elements
                *size   = get_array_size(optarg);
                break;

            case 's': // (vector) situation
                *array_type   = get_array_type(optarg);
                break;

            case 'P': // print
                *print_vector = 1;
            break;

            default:
                /* You won't actually get here. */
                break;
        }

        opt = getopt(argc, argv, optString);
    }
}

char* get_method_name(int method){
    char *name;
    switch(method){
        case SELECTION:
            name = "Selection";
            break;
        case INSERTION:
            name = "Insertion";
            break;
        case SHELL:
            name = "Shell";
            break;
        case QUICK:
            name = "Quick";
            break;
        case HEAP:
            name = "Heap";
            break;
        case MERGE:
            name = "Merge";
            break;
/*            
        case GPUQUICK:
            name = "CUDA Quick Sort";
            break;
        case GPUMERGE:
            name = "CUDA Merge Sort";
            break;
*/            
        case UNDEFINED:
        default:
            name = " - ";
            break;
    }
    return name;
}

char* get_array_type_name(int type){
    char *name;
    switch(type){
        case RANDOM_ORDER:
            name = "Random";
            break;
        case ASCENDING_ORDER:
            name = "Ascending Order";
            break;
        case DESCENDING_ORDER:
            name = "Descending Order";
            break;
        case ALMOST_ORDERED:
           name = "Almost Sorted";
            break;
        case UNDEFINED:
        default:
            name = " - ";
            break;
    }
    return name;
}

void selection_sort(int *array, int size){
    int i, j, min, aux;
      for (i = 0; i < (size-1); i++){
        min = i;
        for (j = (i+1); j < size; j++) {
            numberOfComparisons++;
            if(array[j] < array[min]){
                min = j;
              }
        }
        if (i != min){
            aux = array[i];
              array[i] = array[min];
              array[min] = aux;
              numberOfSwaps++;
        }
    }
}

void insertion_sort(int *array, int size) {
   int i, j, selected;
   for (i = 1; i < size; i++){
      selected = array[i];
      j = i - 1;
      while ((j >= 0) && (selected < array[j])) {
         array[j+1] = array[j];
         j--;
         numberOfComparisons++;
      }
      numberOfSwaps++;
      array[j+1] = selected;
   }
}

void shell_sort(int *array, int size) {
    int i , j , value;
    int gap = 1;
    while(gap < size) {
        gap = 3*gap+1;
    }
    while (gap > 1) {
        gap /= 3;
        for(i = gap; i < size; i++) {
            value = array[i];
            j = i - gap;
            while (j >= 0 && value < array[j]) {
                array [j + gap] = array[j];
                j -= gap;
                numberOfComparisons++;
                numberOfSwaps++;
            }
            array [j + gap] = value;
        }
    }
}

void heap_sort(int array[], int n){
    int i = n/2, father, child, t;

    for(;;) {
        if (i > 0) {
            i--;
            t = array[i];
        }
        else {
            n--;
            if (n == 0)
               return;
            t = array[n];
            array[n] = array[0];
        }

        father = i;

        //Compare with the left child
        child = i*2;

        while (child < n){
            if ((child + 1 < n)  &&  (array[child + 1] > array[child])){
              	child++;
            	numberOfComparisons++;
            }
          	if (array[child] > t){
             	numberOfComparisons++;
             	array[father] = array[child];
             	father = child;
             	child = father*2 + 1;
             	numberOfSwaps++;
          	} else break;
      	}
     	 array[father] = t;
   	}
}

void top_down_merge(int* a,int begin,int end,int* b){
    int middle = (end+begin)/2;
    int i0 = begin;
    int i1 = middle;
    int index;
    int n = end-begin;

    if(n < 2){
        return;
    }

    top_down_merge(a, begin, middle, b);
    top_down_merge(a, middle, end, b);

    for (index = begin; index < end; index++) {
        if (i0 < middle && (i1 >= end || a[i0] <= a[i1])){
            b[index] = a[i0];
            i0++;
        }else{
            b[index] = a[i1];
            i1++;
        }
        numberOfComparisons++;
        numberOfSwaps++;
    }

    memcpy((a+begin),(b+begin),sizeof(int)*(n));
    numberOfSwaps+= n;
}

void merge_sort(int* a,int n){
    int* b = (int*)malloc(sizeof(int)*n);
    top_down_merge(a, 0, n, b);
    free(b);
}

int* sort_array(int *array, int size, int method){

    switch(method){
        case SELECTION:
            start = clock();
            selection_sort(array, size);
            end = clock();
        break;

        case INSERTION:
            start = clock();
            insertion_sort(array, size);
            end = clock();
        break;

        case SHELL:
            start = clock();
            shell_sort(array, size);
            end = clock();
        break;

        case HEAP:
            start = clock();
            heap_sort(array, size);
            end = clock();
        break;

        case MERGE:
            start = clock();
            merge_sort(array, size);
            end = clock();
        break;
/*
        case GPUQUICK:
            start = clock();
            gpu_qsort(array,size);
            end = clock();
        break;

        case GPUMERGE:
            start = clock();
            gpumerge_sort(array,size);
            end = clock();
*/            
    }
    elapsed_time = (((double)(end-start))/CLOCKS_PER_SEC);
    return array;
}

double get_elapsed_time(){
    return elapsed_time;
}

int get_swaps(){
    return numberOfSwaps;
}

int get_comparisons(){
    return numberOfComparisons;
}
