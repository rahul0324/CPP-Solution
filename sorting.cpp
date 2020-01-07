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


// counting sort - As the name saya we sort the array as counting the array of each elements - this sorting is not suitable for large numbers as we create a temp array of maxm element.

	void countingsort(int arr[], int n, int max){

    		int temp[max] = {0};
    		for(int i=0; i<n; i++){
        		temp[arr[i]]++;
    		}

    		printarray(temp,max);  // this print is to check whether our freq array is built correctly or not .

    		int j = 0;
    		for(int i=0; i<max; i++){
        		while(temp[i]>0){
            			if(temp[i] > 0){
                			arr[j] = i; j++;
                			temp[i] -= 1;
            			}
        		}    
    		}

    		printarray(arr,n);   // this to print the array after sorting.



// *** IMPORTANT FOR INTERVIEW ****
// wave sort - print the array in the wave form like 1st element should be bigger than 2nd and third element should be smaller than 2nd.
// we have to create a peak in the wave form like ^^^^ -

	void wavesort(int arr[], int n){  

    		for(int i=0; i<n; i+=2){
        		if(i>0 && arr[i] < arr[i-1]){  // checking for every even place element and making it bigger than their adjacent elements
            			swap(arr[i],arr[i-1]);
        		}
        		if(i<=n-2 && arr[i] < arr[i+1]){
            			swap(arr[i],arr[i+1]);
        		}
    		}

    		printarray(arr,n);
	}
	




