/*
Write a C program to check whether the Host machine is in Little Endian or
Big Endian. Enter a number, print the content of each byte location and
Convert the Endianness of the same i.e. Little to Big Endian and vice-versa
*/

#include <stdio.h>

void checkEndianness() {
	unsigned int x = 1;
    char *c = (char*)&x;

    if (*c == 1)
        printf("System is Little Endian.\n");
    else
        printf("System is Big Endian.\n");
}

void printBytes(unsigned int num) {
    unsigned char *ptr = (unsigned char*)&num;
    printf("Byte-wise representation:\n");
    for (int i = 0; i < 4; i++) {
        printf("Byte %d: 0x%02X\n", i, ptr[i]);
    }
}

unsigned int reverseEndianness(unsigned int num) {
    return ((num & 0xFF000000) >> 24) |
           ((num & 0x00FF0000) >> 8)  |
           ((num & 0x0000FF00) << 8)  |
           ((num & 0x000000FF) << 24);
}

int main() {
	unsigned int num, converted;
	
	checkEndianness();
	
	printf("\nEnter integer: ");
    scanf("%u", &num);
    
    printf("\nOriginal number: %u\n", num);
    printBytes(num);
	
	converted = reverseEndianness(num);
	
	printf("\nAfter Endianness Conversion:\n");
    printBytes(converted);

    return 0;
}
