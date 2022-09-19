//this program review the concept of the dynamic memory allocation

#include <iostream>

int main(){
	//dynamic memory allocation is stored in heap
	int n;
	cin >> n;
	
	int* num = new int;
	int *arr = new int[n];
	
	//store value to dynamic memory allocations
	*num = n;
	for(int i = 0; i < n; i++){
		arr[i] = i;
	}

	//print out the value stored in num and arr
	cout << *num << endl;
	for(int j = 0; j < n; j++){
		cout << arr[j] << " ";
	}
	cout << endl;

	//free the memory of dynamic memory allocations to avoid memory leak
	delete num;
	delete[] arr;

	return 0;
}
