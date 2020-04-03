
 /*
    Author : Abhay Singh Yadav
    Date : Date format 03/04/2020
    Time : Time format 22:15
    Description :  First it will make heap and sort it using function sort_heap.
*/


#include <iostream> 
#include <algorithm> 
#include <vector> 

int main(){ 
    std::vector<int> v = {18, 16, 22, 31, 15, 10, 5};     
    std::make_heap(v.begin(), v.end()); 
   
    std::cout << "Your heap:   "; 
    for (const auto &i : v) { 
     std::cout << i << ' '; 
    }    
   
    std::sort_heap(v.begin(), v.end()); 
    std::cout <<std::endl<< "Sorted heap:   "; 
    for (const auto &i : v) {                                                    
        std::cout << i << ' '; 
    }    
    std::cout <<std::endl; 
    return 0;
} 
