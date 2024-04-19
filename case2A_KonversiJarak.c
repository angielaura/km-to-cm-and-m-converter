#include <stdio.h>

int main()
{
    double distanceKm, distanceCm, distanceM;

    printf("Enter distance in km: ");

    // untuk memastikan inputan user adalah angka.
    if (scanf("%lf", &distanceKm) != 1) { // terjadi pengecekan apakah scanf dengan tipe inputan lf benar(=1 atau true)
        printf("Invalid input. Please enter a number.\n");
        return 1;  // exit status error agar tidak mengeksekusi perintah berikutnya
    }

    // untuk memastikan user menggunakan bilangan positif.
    if (distanceKm < 0) { // setelah mengeksekusi kode sebelumnya, terjadi pengecekan lagi apakah inputan user <0 yang berarti adalah bilangan negatif
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1;  // exit status error agar tidak mengeksekusi perintah berikutnya
    }

    distanceCm = distanceKm * 100000;
    distanceM = distanceKm * 1000;

    printf("Distance in centimeter = %8.2lf\n", distanceCm);
    printf("Distance in meter = %8.2lf\n", distanceM);

    return 0;
}
