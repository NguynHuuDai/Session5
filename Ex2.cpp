#include <stdio.h>

int main() {
    int kqua = 42; 
    int input;  
    
    printf("Hay nhap so ma ban lua chon . \n ", kqua);

    do {
        printf("So ban chon la : ");
        scanf("%d", &input); 
        
      
        if (input < kqua) {
            printf("So ban nhap co gia tri nho hon . Vui long nhap lai.\n", kqua);
        } else if (input > kqua) {
            printf("So ban nhap co gia tri lon hon . Vui lòng nhap lai.\n", kqua);
        }
    } while (input != kqua); 
    
    printf("Gia tri ban nhap chinh xac %d!\n", kqua);

    return 0;
}

