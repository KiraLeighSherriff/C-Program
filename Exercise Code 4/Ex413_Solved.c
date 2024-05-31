#include <stdio.h>

int main(void){

    unsigned char tmp , fin, syn, ack, urg; 

    printf("Enter FIN bit: ");
    scanf("%d", &fin); 

    printf("Enter SYN bit: ");
    scanf("%d", &syn); 

    printf("Enter ACK bit: ");
    scanf("%d", &ack); 

    printf("Enter URG bit: ");
    scanf("%d", &urg); 

    tmp = fin + (syn << 1) + (ack << 4) + (urg << 5); 
    printf("\nEncoding : %d", tmp); 

    fin = tmp & 1;
    syn = (tmp >> 1) & 1; 
    ack = (tmp >> 4) & 1; 
    urg = (tmp >> 5) & 1;

    printf("\nFIN = %d ,SYN = %d ,ACK = %d ,URG = %d", fin , syn , ack , urg); 

    return 0;
}