# push_swap

## Description  
The `push_swap` project is a sorting algorithm challenge designed to test your problem-solving and algorithmic skills. The goal is to sort a stack of integers using a limited set of operations and the least number of moves possible. The project involves implementing two programs:  
1. **push_swap**: Generates the sorting instructions.  
2. **checker**: Verifies if the stack is sorted correctly based on the instructions.  

This project emphasizes algorithm optimization, data structure manipulation, and efficient coding practices.

---

## Instructions  

### Compilation  
To compile the project, use the provided Makefile:  
```bash  
make  
```  
This will generate the `push_swap` and `checker` executables.

### Execution  
1. **Sorting with push_swap**:  
    ```bash  
    ./push_swap [list_of_integers]  
    ```  
    Example:  
    ```bash  
    ./push_swap 3 2 1  
    ```  

2. **Verification with checker**:  
    ```bash  
    ./push_swap [list_of_integers] | ./checker [list_of_integers]  
    ```  
    Example:  
    ```bash  
    ./push_swap 3 2 1 | ./checker 3 2 1  
    ```  
    The `checker` program will output `OK` if the stack is sorted correctly, or `KO` otherwise.

---

## Resources  
- [42 School Subject PDF](https://github.com/42School/push_swap)  
- [Sorting Algorithms Explained](https://www.geeksforgeeks.org/sorting-algorithms/)  
- [Big-O Notation Guide](https://www.bigocheatsheet.com/)  
- [Stack Data Structure](https://www.programiz.com/dsa/stack)  

---

## AI Usage  
AI tools, including GitHub Copilot, were utilized to assist in generating boilerplate code, optimizing algorithms, and improving documentation. These tools provided suggestions for efficient implementations and ensured adherence to best practices in coding and documentation.
