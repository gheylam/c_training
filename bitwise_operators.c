//Testing and trialing out binary operators in C 

#include <stdio.h>

void print_binary_rep(unsigned char binary_val);


int main(void){
  unsigned char binary_0 = 0b00101011;
  unsigned char binary_1 = 0b00101011;
  unsigned char binary_2 = 0b01101101;

  binary_1 |= binary_2;
  printf("Binary 1: %c, Binary 2: %c, New Binary 1: %c\n", binary_0, binary_2, binary_1); 
  print_binary_rep(binary_0);
  return 0;
}

void print_binary_rep(unsigned char binary_val){
  //Function for printing the binary bit values of a char variable 
  int bit_counter;
  for(bit_counter = 0; bit_counter < sizeof(binary_val)*8; bit_counter++){
    //generate the mask for the least significant bit
    unsigned char lsb_mask = 0x1;
    //access the lsb
    unsigned char bit_value = binary_val & lsb_mask;
    //print the value of the bit 
    if(bit_value == 0x1){
      printf("1");
    }else{
      printf("0");
    }
    //shift the binary value down by 1 bit and repreat
    binary_val = binary_val>>1; 
  }
  //end the string with a new line
  printf("\n");
}
