#include<stdio.h>
//sol= left, sag= right, ara=call 
int binary_search(int a[], int ara, int sol, int sag){
	int mid= sol+(sag-sol)/2;
	if(a[mid]== ara )
	 return mid;
	else if( a[mid]> ara ){
		return binary_search(a, ara , sol, mid- 1 );
	}
	else
	return binary_search (a,ara,mid+1,sag);
}
void dizi_sirala(int a[], int n ){ // Array soryted with Selection sort 
	int i , temp ; 
	
	for(i = 0; i<n-1; i++){
	int min= i;
	
	for(int j=i+1; j<n; j++){
	if(a[j]< a[min])
	 min=j;	
	}	
	if(min!=i){
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}	
		
	} 	
	 		for(int k= 0 ; k<n ; k++){
			printf("%d ", a[k]);
		}
	printf("\n");
}

int main( ){
	int n,ara;
	printf("What is the size of the array? ");
	scanf("%d",&n);
	int a[n];
	printf(" What value will you look for? ");
	scanf( "%d",&ara);
	for(int i=0; i<n; i++){
		printf("a[%d]: " , i); 
		scanf(" %d", &a[i]);
	}
	 dizi_sirala(a, n);
	int bin=binary_search(a,ara,0,n-1);
	printf("%d nin indisi : %d ", ara , bin);
	
}
