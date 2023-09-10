/*!
* @file searching.cpp
* Binary search, Linear search, Upper bound, lower bound implementation for an array of integers.
*
* @authors Ludmilla e Júlia
* @date 07/09/23
!*/

#include "searching.h"

namespace search {
    
    /*!
     * Performs a **linear search** for `value` in `[first;last)` and returns a pointer to the location of `value` in the range `[first,last]`, or `last` if no such element is found.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    value_type linear_search(const vector<int>& arr, int target){
        for (int i = 0; i < arr.size(); ++i){
            if (arr[i] == target){
                return i; // retorna a posição se o elemento for encontrado
            }
        }
        return -1; // retorna -1 se o elemento não for encontrado

    }

    /*!
     * Performs a **binary search** for `value` in `[first;last)` and returns a pointer to the location of `value` in the range `[first,last]`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    int binary_search(const vector<int>& arr, int target){
        int left = 0;
        int right = arr.size() - 1;

        while(left <= right){
            int mid = left + (right - left)/2;
            if(arr[mid] == target){
                return mid; //retorna a posição se o elemento for encontrado
            }
            //atualiza os limites esquerdo e direito com base na comparação
            if(arr[mid] < target){
                left = mid +1;
            }else {
                right = mid - 1;
            }
        }
        return -1;
    }

    /*!
     * Performs a **binary search** for `value` in `[first;last)` and returns a pointer to the location of `value` in the range `[first,last]`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    int binary_search_recursive(const vector<int>& arr, int target, int left, int right){
        if(left <= right){
            int mid = left + (right - left)/2;

            //comparar o elemento no meio com o alvo
            if(arr[mid] == target){
                return mid; //retorna a posição se o elemento for encontrado
            }

            //chamar de forma recursiva a função com novos limites esquerdo e direito
            if(arr[mid] < target){
                return binary_search_recursive(arr, target, mid + 1, right);
            } else {
                return binary_search_recursive(arr, target, left, mid - 1);
            }
        }
        return -1;
    }

    //Ternary Search
    int ternary_search(const vector<int>& arr, int target){
        int left = 0;
        int right = arr.size() - 1;

        while(left <= right){
            int mid1 = left + (right - left)/3;
            int mid2 = right - (right - left)/3;

            //comparar os elementos nos terços médios com o alvo
            if(arr[mid1] == target){
                return mid1;
            }
            if(arr[mid2] == target){
                return mid2;
            }
            //atualiza os limites esquerdo e direito 
            if(arr[mid1] > target){
                right = mid1 - 1;
            } else if(arr[mid2] < target){
                left = mid2 + 1;
            }else {
                left = mid1 + 1;
                right = mid2 - 1;
            }
        }
        return -1;

    }

    /*!
     * Returns a pointer to the first element in the range `[first, last)` that is _not less_  than (i.e. greater or equal to) `value`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    int lower_bound(const vector<int>& arr, int target){
        int left = 0;
        int right = arr.size();

        while(left < right){
            int mid = left + (right - left)/2;
            if (arr[mid] < target){
                left = mid + 1;
            } else {
                right = mid;
            }
            //se o elemento for encontrado, retorna a posição
            //se não for encontrado, retorna a posição onde deveria ser inserido
        }

        return left;
    }

    /*!
     * Returns a pointer to the first element in the range `[first, last)` that is _greater_  than `value`, or `last` if no such element is found.
     * \note The range **must** be sorted.
     * \param first Pointer to the begining of the data range.
     * \param last Pointer just past the last element of the data range.
     * \param value The value we are looking for.
     */
    int upper_bound(const vector<int>& arr, int target){
        int left = 0;
        int right = arr.size();

        while(left < right){
            int mid = left + (right - left)/2;
            if(arr[mid] <= target){
                left = mid +1;
            } else {
                right = mid;
            }
        }
        return left;
    }
}


