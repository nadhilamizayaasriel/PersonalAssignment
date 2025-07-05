#include <stdio.h>

int main(){
    //Deklarasi variabel yang akan diperlukan 
    int inputangka1, inputangka2, inputangka3;
    int penjumlahan;
    int pengurangan;
    int perkalian;
    float pembagian;
    float mean;

    //Pengguna akan memasukan 3 angka yang berupa bilangan bulat
    printf("--------------Silahkan masukan bilangan bulat--------------\n");
    printf("Masukan angka 1 :");
    scanf("%d", &inputangka1);
    printf("Masukan angka 2 :");
    scanf("%d", &inputangka2);
    printf("Masukan angka 3 :");
    scanf("%d", &inputangka3);

    //Rumus operasi angka pada variabel yang diinput
    penjumlahan = inputangka1 + inputangka2 + inputangka3;
    pengurangan = inputangka1 - inputangka2 - inputangka3;
    perkalian = inputangka1 * inputangka2 * inputangka3;
    pembagian = (float)inputangka1/inputangka2/inputangka3;
    mean = (inputangka1+inputangka2+inputangka3)/3.0;

    //Mencetak hasil operasi variabel
    printf("\n--------------Hasil Perhitungan--------------\n");
    printf("Hasil penjumlahan : %d\n", penjumlahan);
    printf("Hasil pengurangan : %d\n", pengurangan);
    printf("Hasil pembagian : %.2f\n", pembagian);
    printf("Nilai rata-rata : %.2f", mean);

return 0;

}
