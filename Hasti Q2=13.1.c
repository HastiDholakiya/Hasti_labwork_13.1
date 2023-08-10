#include <stdio.h>

void main() {
	
    FILE *file = fopen("divisible_numbers.txt", "w");
    
    int i,j;
    
    if (file == NULL) {
        printf("Error opening file.\n");
    }
    
    for ( i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            char hasti[20];
            int len = sprintf(hasti, "%d\n", i);
            
            for ( j = 0; j < len; j++) {
                fputc(hasti[j], file);
            }
        }
    }
        printf("File created and numbers written successfully.\n");

}
