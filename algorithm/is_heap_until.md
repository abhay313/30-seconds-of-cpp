/*
    Author : Abhay Singh Yadav
    Date : Date format 17/10/2019
    Time : Time format 16:05
    Description : This code returns the iterator to the position till the container is the heap. 
*/
#include<iostream> 
#include<algorithm>
#include<vector> 

int main(){ 

	std::vector<int> v1 = {70, 60, 45, 30, 25,67}; 
	std::vector<int>::iterator it1; 
	
	auto it = is_heap_until(v1.begin(), v1.end()); 
	
	std::cout << "The heap elements in container are : "; 
	for (it1=v1.begin(); it1!=it; it1++) {
	std::cout << *it1 << " "; 
	}
	std::cout<<"\n";
	return 0; 
} 
