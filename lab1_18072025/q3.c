//Write a C program to extract each byte from a given number and store the min separate character variables and print the content of those variables.

#include<stdio.h>
int main() {
	unsigned int num = 7;
	char byte1, byte2, byte3, byte4;
	byte1 = num & 0xFF;             
    byte2 = (num >> 8) & 0xFF;      
    byte3 = (num >> 16) & 0xFF;     
    byte4 = (num >> 24) & 0xFF;
    
    // Print results
    printf("Original number: %u\n", num);
    printf("Byte 1: 0x%02X | As int: %d | As char: %c\n", (unsigned char)byte1, byte1, byte1);
    printf("Byte 2: 0x%02X | As int: %d | As char: %c\n", (unsigned char)byte2, byte2, byte2);
    printf("Byte 3: 0x%02X | As int: %d | As char: %c\n", (unsigned char)byte3, byte3, byte3);
    printf("Byte 4: 0x%02X | As int: %d | As char: %c\n", (unsigned char)byte4, byte4, byte4);

    return 0;     
}
