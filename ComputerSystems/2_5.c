// Using casting to access and print the byte representatiaon of different program objects. 

#include <stdio.h>  
#include <string.h> 

typedef unsigned char* byte_pointer; // using type alias improves code readability  
                // (pointer to an unsigned char, )

const char *m = "mnopqr"; 

void show_bytes(byte_pointer start, size_t len) { //the compiler desiced if the len is an unsigned int, long, or float. 
    for (int i = 0; i < len; i++) { 
        printf(" %.2x", start[i]); // %.2 indicates that an integer should be pritned in hexadecimal with at least 2 digits. 
    }   // dereference a pointer with array notation. 
    printf("\n"); 
} 

void show_int(int x) { 
    show_bytes((byte_pointer) &x, sizeof(int)); 
}

void show_float(float x) { 
    show_bytes((byte_pointer) &x, sizeof(float)); 
}

void show_pointer(void *x) { 
    show_bytes((byte_pointer) &x, sizeof(void *)); 
}

int main() { 
    int a = 0x12345678; 
    int len1 = 1;
    int len2 = 2; 
    int len3 = 3; 
    int len4 = 4;   

    //  This cast indicates to the compiler that the program should consider the pointer to be to a sequence of bytes rather than to an object of the original data type. 
    byte_pointer ap = (byte_pointer) &a; 

    show_bytes(ap, len1);
    show_bytes(ap, len2); 
    show_bytes(ap, len3); 
    show_bytes(ap, len4); 

    show_bytes((byte_pointer) m, strlen(m)); 
    // Note that letters from a through z have ASCII codes 0x61 throught 0x7A 

    
}

// A. Little Endian: 78                     Big Endian: 12 
// B. Little Endian: 78 56                  Big Endian: 12 34 
// C. Little Endian: 78 56 34               Big Endian: 12 34 56

