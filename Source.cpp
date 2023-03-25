#include<iostream>


int* bubbleSort(int arr[],int length) {
	
		for (int i = 0; i < length - 1; i++) {
			for (int j = 0; j < length-1; j++) {
				int temp;
				if (arr[j] > arr[j + 1]) {
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
			}
		}
	}
	return arr;
}

int* selectionSort(int arr[], int length) {
	
	for (int i = 0; i < length - 1; i++) {
		
		for (int j = i; j < length - 1; j++) {
			int temp;
			if (arr[j] < arr[i]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
		
	}
	return arr;
}

int* insertionSort(int arr[], int length) {
	for (int i = 1; i < length; i++) {
		
		int j = i;
		int k = i;
		while (j >= 0) {
			int temp;
			if (arr[j] > arr[k]) {
				temp = arr[j];
				arr[j] = arr[k];
				arr[k] = temp;
				k--;
			}
			j--;
		}
		
	}

	return arr;

}

int partition(int arr[], int start ,int end) {
	int pivot = arr[end];
	int j = start - 1;
	int temp;
	for (int i = start; i < end; i++) {
		if (arr[i] < pivot) {
			j++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
				
		}
	}
	temp = arr[j + 1];
	arr[j + 1] = arr[end];
	arr[end] = temp;
	
	return j+1;
}


int* quickSort(int arr[], int start, int end) {
	if (start < end) {
		int idx = partition(arr, start, end);
		quickSort(arr, start, idx - 1);
		quickSort(arr, idx + 1, end);
	}

	return arr;
}


int main() {

	int* ptr;
	int arr[] = { 8,2,4,1,3,7,9,6,5 };
	int length = sizeof(arr) / sizeof(arr[0]);
	
	ptr = quickSort(arr, 0, length - 1);

	for (int i = 0; i < length; i++) {
		std::cout << ptr[i] << " ";
}


	return 0;
}