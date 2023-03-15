#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int num[4] = {4,5,7,6};
	min_bul(num, 4);
	return 0;
}


int min_bul(int dizi[], int eleman_sayisi) {
     int min = dizi[0]; // 1
     for (int i = 1; i < eleman_sayisi; i++){ // 1 + n + (n -1) = 2n
          if(min > dizi[i]) // n - 1
          	 min = dizi[i]; // n - 1
     }
     return min; // 1
}  // T(n) = 4n
