// Using casting to access and print the byte representatiaon of different program objects. 

#include <stdio.h> 
typedef unsigned char* byte_pointer; // using type alias improves code readability  

void show_bytes(byte_pointer start, size_t len) { //the compiler desiced if the len is an unsigned int, long, or float. 
    for (int i = 0; i < len; i++) { 
        printf("%.2x", start[i]); // %.2 indicates taht an integer should be pritned in hexadecimal with at least 2 digits. 
    }
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

    // Type casting in action. 
    // character is a cast to 
    char character = 'n';
    size_t char_len = sizeof(character);
    printf("Bytes of character 'n': ");
    show_bytes((byte_pointer)&character, char_len); 
    // explict type casting. &character is the address of the variable. Points us to where the variable is stored. 

    // by casting it as (byte_pointer), we're telling the compiler to treat this address   as a pointer to a sequence of bytes, rather than as a pointer to a character.     

    
}  
