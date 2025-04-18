#include <stdio.h>
#include <string.h> // strlen, strcpy, strcmp, strcat

int main() {
    // Tek boyutlu dizi (notlar)
    int notlar[5] = {80, 90, 75, 60, 85};

    // Karakter dizileri (C stringler)
    char isim1[20] = "Ali";
    char isim2[20];
    char tamIsim[40];

    // strcpy: kopyalama
    strcpy(isim2, " Veli");

    // strcat: birleþtirme
    strcpy(tamIsim, isim1);
    strcat(tamIsim, isim2);

    // strlen: uzunluk
    printf("Isim: %s (Uzunluk: %lu karakter)\n", tamIsim, strlen(tamIsim));

    // strcmp: karþýlaþtýrma
    if (strcmp(isim1, isim2) == 0) {
        printf("Isimler ayni.\n");
    } else {
        printf("Isimler farkli.\n");
    }

    // Notlarý yazdýrma
    printf("\nOgrenci Notlari:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ders %d: %d\n", i + 1, notlar[i]);
    }

    return 0;
}
