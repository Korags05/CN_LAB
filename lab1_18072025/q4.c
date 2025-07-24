/*
Write a C Program to enter a number and store the number across the following structure and print the content of each member of the structure. Then aggregate each member of the structure to form the original number and print the same. 
struct pkt {
	char ch1;
	char ch2[2];
	char ch3;
};
*/

#include<stdio.h>

struct pkt {
	char ch1;
	char ch2[2];
	char ch3;
};

int main () {
	
	unsigned int num;
	
	struct pkt p;

	printf("Enter an integer: ");
	scanf("%u", &num);
	
	p.ch1     = (num & 0xFF);
    p.ch2[0]  = (num >> 8)  & 0xFF;
    p.ch2[1]  = (num >> 16) & 0xFF;
    p.ch3     = (num >> 24) & 0xFF;
    
    printf("\nStored in structure:\n");
    printf("ch1     = 0x%02X\n", (unsigned char)p.ch1);
    printf("ch2[0]  = 0x%02X\n", (unsigned char)p.ch2[0]);
    printf("ch2[1]  = 0x%02X\n", (unsigned char)p.ch2[1]);
    printf("ch3     = 0x%02X\n", (unsigned char)p.ch3);
    
    unsigned int reconstructed = ((unsigned char)p.ch3 << 24) |
                                 ((unsigned char)p.ch2[1] << 16) |
                                 ((unsigned char)p.ch2[0] << 8) |
                                 (unsigned char)p.ch1;
	
	printf("\nReconstructed number: %u\n", reconstructed);

	
	return 0;
}
