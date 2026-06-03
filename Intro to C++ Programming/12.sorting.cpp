/*

Selection sorting
Selection sorting problem on coding ninjas


#include <bits/stdc++.h>
void selectionSort(vector<int>& arr, int n)
{
    for (int i = 0; i< n-1; i++){
        int minIndex = i;


        for(int j = i+1; j<n; j++){


            if (arr[j]< arr[minIndex])
            minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

=====================================================================

Bubble sorting
Bubble sorting problem on coding ninjas


#include <bits/stdc++.h>
void bubbleSort(vector<int>& arr, int n)
{
    for(int i=1; i<n; i++){
        //for round n to n-1


        for (int j = 0; j<n-1; j++){
            //process element till n-i th index
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

======================================================================

Insertion sorting
Insertion sorting problem on coding ninjas


#include <bits/stdc++.h>
void insertionSort(int n, vector<int> &arr){

    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        for (; j>=0; j--){


            if(arr[j] > temp){
                //shift
                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]=temp;
    }
}



*/