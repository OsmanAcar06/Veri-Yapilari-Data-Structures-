#include <stdio.h>

// Mevcut Insertion Sort fonksiyonu 
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
	printf("%d ", A[k]); // S�ralanm�� diziyi g�sterir. 
}
}
int main() {
    int n, i;

    // Kullan�c�dan dizi boyutunu ve elemanlar�n� alma
    printf("Kac elemanli bir dizi siralamak istiyorsunuz? ");
    scanf("%d", &n);

    int A[n];
    printf("Dizi elemanlar�n� giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // S�ralama �ncesi dizi
    printf("Siralama �ncesi dizi: ");
    for (i = 0; i < n; i++)
        printf("%d, ", A[i]);
    printf("\n");

    // Insertion Sort ile s�ralama
    printf("Siralama islemi basliyor...\n");
    insertion_Sort(A, n);
    
}

