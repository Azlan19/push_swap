*This project has been created as part of the 42 curriculum by oazlan.*

# push_swap

## Description  
The `push_swap` project is a sorting algorithm challenge designed to test your problem-solving and algorithmic skills. The goal is to sort a stack of integers using a limited set of operations and the least number of moves possible.

This repository contains the `push_swap` program which sorts a sequence of numbers, without duplicates, using 2 stacks and limited commands. 

---

## Instructions  

### Compilation  
To compile the project, use the provided Makefile:  
```bash  
make  
```  
This will generate:
- `ft_printf`
- the project sources and compile them into `obj/`
-  the final executable as `push_swap`

Useful commands
```bash  
make clean  
make fclean  
make re  
```  

### Execution  
**Sorting with push_swap**:  
```bash  
./push_swap [list_of_integers]  
```  
- Example 1:  
    ```bash  
    ./push_swap 3 2 1 5 9  
    ```  
- Example 2:  
    ```bash  
    ./push_swap "3 2 1 5 9"  
    ```  
The program prints the list of operations, separated by `'\n'`, needed to sort the input.


### Operations List
- SWAP (swaps the first 2 elements of the stack) -> `sa`, `sb`, `ss` (swaps both simultaneously)  
- PUSH (Pushes top element of 1 stack to the top of the other) -> `pa`, `pb`
- ROTATE (Shift up all elements in a stack by 1) -> `ra`, `rb`, `rr` (rotates both simultaneously)  
- REVERSE ROTATE (Shift down all elements in a stack by 1) -> `rra`, `rrb`, `rrr` (reverse rotates both simultaneously)  

### Errors
The program prints `Error` when an input contains:
- A value that is not a valid integer
- A value outside the int range
- Duplicate values

---

## Resources  
- 42 School Subject PDF 
- [Algorithm Explanation Article](https://medium.com/@ayogun/push-swap-c1f5d2d41e97)
- [YouTube Tutorial](https://www.youtube.com/watch?v=wRvipSG4Mmk)
- [Algorithm Visualizer](https://push.eliotlucas.ch/)


---

## AI Usage  
- Understanding how to link and unlink nodes in commands
- Making this README
