#include <iostream>
#include <vector>
#include "searching.h"
#include "searching.cpp"
using namespace std;
using namespace search;

int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    value_type first = 0;
    value_type last = 9;

    //valor que sejeja procurar
    value_type target = 5;

    //teste busca linear
    value_type *linear_result = search::linear_search(arr.data(), arr.data() + arr.size(), target);
    if(*linear_result != -1){
        cout << "Busca linear encontrou o valor " << target << " na posição " << linear_result << endl;
    } else {
        cout << "Busca linear não encontrou o valor " << target << endl;
    }

    //busca binaria
    int *binary_result = search::binary_search(arr.data(), arr.data() + arr.size(), target);
    if (*binary_result != -1) {
        cout << "Busca binária encontrou o valor " << target << " na posição " << binary_result << endl;
    } else {
        cout << "Busca binária não encontrou o valor " << target << endl;
    }

    //binaria recursiva
    int* binary_recursive_result = search::binary_search_recursive(arr.data(), arr.data() + arr.size(), target);
    if (*binary_recursive_result != -1) {
        cout << "Busca binária recursiva encontrou o valor " << target << " na posição " << binary_recursive_result << endl;
    } else {
        cout << "Busca binária recursiva não encontrou o valor " << target << endl;
    }

    //busca ternaria
    int *ternary_result = search::ternary_search(arr.data(), arr.data() + arr.size(), target);
    if (*ternary_result != -1) {
        cout << "Busca ternária encontrou o valor " << target << " na posição " << ternary_result << endl;
    } else {
        cout << "Busca ternária não encontrou o valor " << target << endl;
    }

    //lower bound
    int *lower_bound_result = search::lower_bound(arr.data(), arr.data() + arr.size(), target);
    cout << "Lower bound para " << target << " é na posição " << lower_bound_result << endl;
    
    //upper bound
    int *upper_bound_result = search::upper_bound(arr.data(), arr.data() + arr.size(), target);
    cout << "Upper bound para " << target << " é na posição " << upper_bound_result << endl;
    }

