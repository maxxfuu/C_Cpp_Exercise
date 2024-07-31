#include <stdio.h> 

typedef unsigned char* byte_pointer; // using type alias improves code readability  

void show_bytes(byte_pointer start, size_t len) { //the compiler desiced if the len is an unsigned int, long, or float. 
    for (int i = 0; i < len; i++) { 
        printf("%.2x", start[i]); 
    }
    printf("\n"); 
}

int main() { 

    char character = 'n';
    size_t char_len = sizeof(character);
    printf("Bytes of character 'n': ");
    show_bytes((byte_pointer)&character, char_len); 
    
}