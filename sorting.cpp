// In this file I have included all sorting algo - 

// Bubble sort - In this sorting we compare adjacent elements always

	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]){                             
				swap(arr[j],arr[j+1]);      
			}
		}
	}

// selection sort - In this sorting firstly we assume the current element as min and then find out the min element from the rest array and swap them

	for(int i=0; i<n-1; i++){
		int min = i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[min]){			 
				min = j;
			}
		}
		swap(arr[i],arr[min]);
	}

// Insertion sort - In this sorting we take arr[1] (i=1) as current and j as i-1 and compare accordingly

	for(int i=1; i<n; i++){
	int j = i-1;
	int temp = arr[i];
		while(j>=0 && arr[j]>temp){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}


