#include <stdio.h>

// Selection Sort Fonksiyonu
void selection_Sort(int A[], int n) {
    int i, temp;

for(int i=0; i<n-1; i++ ){
	int minindis=i;  
	printf("Baslangic minindis = %d  ", minindis);
	for(int j=i+1; j<n ; j++ ){
		if(A[j] < A[minindis])
		minindis= j;	
	}
	if(minindis!=i){
		temp=A[i];
		A[i]=A[minindis];
		A[minindis]=temp;
	}
       // Her sýralama adýmýný ekrana yazdýr
        printf(" %d. siralama: ", i + 1);
        for (int k = 0; k < n; k++)
            printf("%d, ", A[k]);
        printf("\n");
    }	

}



int main() {
    int n;

    // Kullanýcýdan dizi boyutunu alma
    printf("Kac elemanli bir dizi siralamak istiyorsunuz? ");
    scanf("%d", &n);

    int A[n];

    // Kullanýcýdan dizi elemanlarýný alma
    printf("Dizi elemanlarini giriniz:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Sýralama öncesi dizi
    printf("Siralama oncesi dizi: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", A[i]);
    printf("\n");

    selection_Sort(A, n);

    // Sýralama sonrasý dizi
    printf("Siralama sonrasi dizi: ");
    for (int i = 0; i < n; i++)
        printf("%d, ", A[i]);
    printf("\n");

    return 0;
}

