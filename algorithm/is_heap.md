#is_heap

Description : Check whether the container is heap or not [first, last)

Example :
#include<iostream> 
#include<algorithm>
#include<vector>                                             

int main(){ 

	std::vector<int> v1 = {2400, 908, 525, 145, 57}; 	       
	
	if(is_heap(v1.begin(), v1.end())){ 		                   
	    std::cout << "The container is heap \n";
	}
  	else{
	    std::cout << "The container is not heap \n";
	}  
	return 0; 
} 
