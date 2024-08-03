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

void inplace_swap(int *x, int *y) { 
    
}

int main() { 

}
 
