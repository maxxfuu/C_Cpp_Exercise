#include <iostream> 

class Foo { 

    private:  
        int x;
        int* x_ptr; 

    public:
        Foo() { 
            x_ptr = new int; *x_ptr = 0; 
        }

        // Special Constructor called copy constructor. Without this there would be a memory leak. 
        Foo(const Foo& p) {
            x_ptr = new int; // Dynamically allocat memory for an integer-as a place holder. 
            *x_ptr = p.get();
        }
        void set(int i) { 
            *x_ptr = i;  
        } 

        int get() const { 
            return *x_ptr; 

    } 
}; 

// Copy constructor exercise. 
int main() { 

    Foo f; 
    f.set(8); 

    //Foo g = f; 
    Foo g(f); 
    std::cout << f.get(); 

    g.set(69); 

    std::cout << g.get(); 



    

}
