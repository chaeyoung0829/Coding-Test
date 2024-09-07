#include<stdio.h>

int main(){
  
  int arr[] = {15,29,46,3,22};
  int i;
  exchange(arr);
	for (i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
    }

	return 0; 
}

void exchange(int arr[]) {
    
  int i;
  int max=0;
  int min=0;
  int temp;

  for(i=0; i < 5; i++){
    if(arr[i] > arr[max]) {
        max=i;
    }
    if(arr[i] < arr[min]){
        min=i;
    }
  }
    temp=arr[max];
    arr[max] = arr[min];
    arr[min] = temp;
}
