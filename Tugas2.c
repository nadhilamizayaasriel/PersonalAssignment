#include <stdio.h>
int main(){
    int bilanganbulat[5];
    int *ptr = bilanganbulat;
    int tertinggi;
    int terendah;
    float ratarata;

    printf("Masukkan bilangan bulat:\n");
    for (int i = 0; i < 5; i++) {
        printf("Bilangan ke-%d: ", i + 1); //Beri tahu pengguna bilangan ke berapa
        scanf("%d", &bilanganbulat[i]);
    }

    //inisialisasi variabel terendah dan tertinggi ke pointer
    terendah = *ptr;
    tertinggi = *ptr;

    //Perulangan untuk membandingkan nilai tertinggi dan terendah
    for(int i = 0; i < 5; i++){
        //membandingkan nilai tertinggi
       if(*(ptr + i) > tertinggi){
        tertinggi = *(ptr + i); //jika lebih true maka nilai tertinggi update
       }
       //membandingkan nilai terendah
       if(*(ptr + i) < terendah){
        terendah = *(ptr + i); //jika lebih true maka nilai terendah update
       }
    }
    //rumus hitung rata rata
    ratarata = ((float)(*(ptr + 0) + *(ptr + 1) + *(ptr + 2) + *(ptr + 3) + *(ptr + 4))) / 5;

    //mencetak hasil
    printf("---------Hasil Perhitungan-----------\n");
    printf("%d adalah angka tertinggi\n", tertinggi);
    printf("%d adalah angka terendah", terendah);
    printf("\nRata-rata semua bilangan adalah %.2f", ratarata);
       
return 0;
}