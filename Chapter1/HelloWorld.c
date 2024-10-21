#include <stdio.h>   // This line includes the standard input-output library, which allows using functions like printf.

int main() {         // This is the main function where the program execution starts.
    
    // The printf function is used to print a message to the console.
    // Here it prints the string "Hello world" followed by a newline character '\n', which moves the cursor to the next line.
    printf("Hello world\n");  
    
    // This prints the string "Answer" followed by an integer value (42 in this case).
    // %d is a format specifier for integers.
    printf("Answer %d\n", 42);  
    
    // This prints the string "Name" followed by another string ("Sarah" in this case).
    // %s is a format specifier for strings.
    printf("Name %s\n", "Sarah");  
    
    // This prints two variables: a floating-point number (3.5) and an integer (100).
    // %.1f is a format specifier for floating-point numbers, printing one decimal point.
    // %d is used again for the integer.
    printf("x %.1f i %d\n", 3.5, 100);  

    return 0;        // The return statement marks the end of the main function and returns 0, indicating successful execution.
}
