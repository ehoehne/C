README.txt
----------

Description:
-------------
This program implements a basic singly linked list in C. The list supports operations such as creating a list, adding items, removing items, printing the list, flushing (emptying) the list, and 
freeing all memory associated with the list.

Components:
-----------
1. `list.h`: Header file that declares the structure of the Node and List and the prototypes for the list operations.
2. `list.c`: Contains the implementations of the list operations.
3. `list_test.c`: A test program to demonstrate the functionalities of the linked list.
4. `Makefile`: A tool for building and running the program. It helps in automating the compile and link process.

Build Instructions:
-------------------
1. Navigate to the directory containing the source files, header files, and the Makefile.
2. Run the command: `make list_test`
   This will compile the required `.c` files and generate an executable named `list_test`.
3. To clean up the build artifacts (like `.o` files), run: `make clean`

Run Instructions:
-----------------
After building the program using the instructions above, run the executable:

Challenges Overcome:
--------------------
- One of the main challenges faced was recalling the mechanics of singly linked lists. To refresh our memory, we referred to our textbook "Designing Data Structures in Java" from our Data Structures 
and Algorithms class we took two years ago.
- Another challenge was the creation of the Makefile. We hadn't previously written a Makefile, so understanding its syntax and working was a bit tricky. However, we managed to use the resource 
provided with the assignment to get a grip on it.

Resources and Collaborations:
-----------------------------
- Textbook: "Designing Data Structures in Java" (Used for understanding linked lists)
- Assignment Resources: Used for understanding and writing the Makefile.
- Collaborative discussions were held among peers to understand certain concepts better, especially when it came to linked list mechanics and the intricacies of the Makefile.

