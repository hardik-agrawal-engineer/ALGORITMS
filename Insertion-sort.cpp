// we will include the libraries needed to run the algorithm
#include <iostream>
#include <vector>

// here is the insertion sort function 
std::vector<int> insertionsort(std::vector<int> ARR) {
    // now we will intialise a for to travel from starting 
    // to ending of the elements of the array
    for (size_t i =1; i < ARR.size(); i++) {
        int key = ARR[i]; 
        int j = i-1;
        while (j>= 0 && ARR[j] > key) {
            ARR[j+1] = ARR[j];
            j = j-1;
        }
        ARR[j+1] = key;
        
    }
    return ARR;
}

//now we will run the code through the main block and check that our algoritm is working.
int main() {
    std::vector<int> arr ;
    arr = {2,5,1,6,8,3,6,7,54,6,8,45,3,3,5,76,78,6,5,6,7,6,5,3,3,32,2,5,6,3,5}; 
    std::vector<int> new_arr;
    arr = insertionsort(arr);

   for (int i=0; i< arr.size(); i++) {
        std::cout << arr[i] << " ," ;
   }
    return 0;
}
