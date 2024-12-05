#include <stdio.h>
// Available Insert Sort Function
void insertion_Sort(int A[], int n) {
int i,j,k,temp;
	
	for(k=1; k<n; k++ ){
	temp = A[k];
	j=k-1; 
	while((temp<A[j] )&& j>=0 ){
		A[j+1] = A[j];
		j=j-1; 
	}
	A[j+1]=temp;
}
for(k=0; k<n; k++){
	printf("%d ", A[k]); // Sýralanmýþ diziyi gösterir. 
}
}
int main() {
    int n, i;
    // Gets array size and elements from the user 
    printf("Kac elemanli bir dizi siralamak istiyorsunuz? ");
    scanf("%d", &n);
    int A[n];
    printf("Dizi elemanlarýný giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }
    // Array before sorting
    printf("Siralama öncesi dizi: ");
    for (i = 0; i < n; i++)
        printf("%d, ", A[i]);
    printf("\n");
    // Sorting with insertion sort
    printf("Siralama islemi basliyor...\n");
    insertion_Sort(A, n);
}
