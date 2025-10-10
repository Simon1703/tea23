#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

// Teil 3
void changeValueByParameter(int value){
    value= 99;
    fmt::println("Variable wurde innerhalb der Funktion geändert auf: {}", value);
}

void changeValueByPointer(int* ptr){
    *ptr = 77;
    fmt::println("Variable wurde innerhalb der Funktion geändert auf: {}", *ptr);
}


int main(int argc, char **argv) {

    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/latest/api.html
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    // Teil 0
    for (int i= 0; i<argc; i++) {
        fmt::println("argc: {}, argument: {} (Adresse: {})", i, argv[i], fmt::ptr(argv[i]));
    }

    // Teil 1
    // 1.1
    int x= 10;

    // 1.2
    int* p= &x;

    // 1.3
    fmt::println("Wert von x: {}", x);
    fmt::println("Adresse von x: {}", fmt::ptr(&x));

    // 1.4
    fmt::println("Wert von p: {}", fmt::ptr(p));
    fmt::println("Wert, auf den p zeigt: {}", *p);
    fmt::println("Adresse von p: {}", fmt::ptr(&p));

    //. 1.5
    *p= 42;

    // 1.6
    fmt::println("Neuer Wert von x: {}", x);
    fmt::println("Adresse von p: {}", fmt::ptr(&p));
    fmt::println("Neuer Wert, auf den p zeigt: {}", *p);


    // Teil 2
 
    double* po = new double(3.1415);   // Speicher im Heap reservieren
    fmt::println("Wert: {}", *po);    // Zugriff über Dereferenzierung  
    fmt::println("Adresse: {}", fmt::ptr(po));

    delete po;                         // Speicher wieder freigeben


    // Teil 3


    int y= 5;
    fmt::println("y ist nun: {}", y);

    changeValueByParameter(y);
    fmt::println("y ist außerhalb der Funktion nun: {}", y);
    changeValueByPointer(&y);
    fmt::println("y ist außerhalb der Funktion nun: {}", y);




    
    /* INSERT YOUR CODE HERE */

    return 0; /* exit gracefully*/
}
