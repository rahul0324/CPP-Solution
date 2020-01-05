// In this file I have included all sorting algo - 

// Bubble sort - 

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j],arr[j+1]);
			}
		}
	}

// selection sort - 

	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}

// Insertion sort - 

	for(int i=1; i<n; i++){
	int j = i-1;
	int temp = arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}


