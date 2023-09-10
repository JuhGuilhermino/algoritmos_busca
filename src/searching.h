/*!
* A simple implementation of various search algorithms for an array of integers
* Includes linear search, binary search, recursive binary search, ternary search
*lower bound, and upper bound.
*
* @authors Ludmilla e Júlia
* @date 07/09/23
!*/

#ifndef SEARCHING_H
#define SEARCHING_H

#include <iterator>
using namespace std;

namespace search {
    /// just an alias for an integer type.
    using value_type = int;

    /// Linear search.
    value_type *linear_search(value_type *first, value_type *last, value_type value);

    /// Binary search.
    value_type *binary_search(value_type *first, value_type *last, value_type value);

    /// Recursive binary search.
    value_type *binary_search_recursive(value_type *first, value_type *last, value_type value);

    /// Lower bound.
    value_type *lower_bound(value_type *first, value_type *last, value_type value);

    /// Upper bound.
    value_type *upper_bound(value_type *first, value_type *last, value_type value);

    /// Ternary search.
    value_type *ternary_search(value_type *first, value_type *last, value_type value);
} 


#endif // SEARCHING_H

