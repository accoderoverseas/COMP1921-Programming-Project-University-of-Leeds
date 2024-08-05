[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/CdbFvmXG)
[![Open in Codespaces](https://classroom.github.com/assets/launch-codespace-2972f46106e565e64193e422d61a12cf1da4916b45550586e14ef0a7c637dd04.svg)](https://classroom.github.com/open-in-codespaces?assignment_repo_id=15503774)
# COMP1921 Resit Asssignment - Template Code

This template is provided to help you develop functional code for the resit assessment.

Note that you **do not need** to use my template- if you are more comfortable writing the code from scratch that is also fine.

# Big Important Reminder - Academic Integrity

If you use **any** generative AI tools, you **must** reference this correctly - please see the referencing section of the brief for the rules. If you fail to reference use of generative AI, this is plagiarism and will be treated as such.

## What is assessed?

### Autograder

50 marks of this assignment are autograded, which means you code **must** follow certain rules in order to pass:

- You need to use the return codes given in the specification
- You need to ensure you do not add any extra features which might impact the grader (for example, a 'quit' or 'exit' option)
- You need to either use my map printing function, **or** write your own which prints in exactly the same way.

The autograder will be checking your program's behaviour with different inputs such as:
- invalid map files
- incorrect command line arguments
- bad user inputs
- And some success cases.

The grader will check a combination of your return codes **and** prints from the 'm' option, as this allows me to check things like movement are working correctly.

### Code Structure

10 Marks are available for having well-structured code, which comprises of:
- comments
- general code readability
- consistent formatting

#### Comments
Make sure all functions have a nicely formatted doxygen comment - here's an example:
```c
/**
 * @brief Get the width of the file and check for irregular width/height
 * 
 * @param filename filename to be opened
 * @return int the width OR -1 in case of errors.
 */
int get_width(char *filename){
```
There is a useful vscode extension 'Doxygen Documentation Generator' which will generate the tags for you when you type '/**' above a function, so you only need to fill out the different sections.

In-code comments should be brief and only used when there is something more complex to explain. Avoid basic descriptive comments as these are unnecessary and clutter your code. Assume that anyone reading your code understands basic C. It is **absolutely fine** if you do not have many in-code comments.

#### General Readability

This is all about how easy to follow your code is- have you used whitespace well to break it up, are things named sensibly, can I understand what's going on without having to go back and read it again?

It's also important to have **clear variable names** to help with readability- you should avoid any one character names such as `i`, `j`, `k` outside of loops.

```c
// always define one-char variables inside the loop
// this limits scope:
for (int i = 0; i < 10 ; i++)
{
    ...
}


// instead of:
int i = 0;
for (i;i<10;i++)
{
    ...
}
```

In the 2nd example, `i` is a variable which exists outside of the loop which means it is still floating around afterwards. This makes it harder to follow what its current value is and where it has been used before.

#### Consistent Formatting

This is just being consistent in things like where you put your brackets, how many spaces you use for indents, and what case your function and variable names are in.

Here's some badly formatted code:
```c
int main(){

    for(int i= 0; i<10;i++ )
    {
      printf("This is very inconsistent!");}
}
```
Compared to:
```c
int main()
{
    for(int i = 0; i < 10 ; i++)
    {
        printf("This is nice and consistent!");
    }
}
```

You can use an in-built autoformatter to do this for you- if you have the 'C' extension installed in VSCode, you can use `alt`+`shift`+`f` on Windows to autoformat a whole file.


### Dynamic Memory

5 marks are available for use of dynamic memory.

To ensure that memory is being used efficiently, it is expected that you attempt to do *dynamic* memory allocation for this assignment. This means that when you have a data structure which you do not know the size of, you use `malloc()` to set the size during the program execution.

When you do this, you should also use `free()` to ensure that you are releasing the memory before the program exits - this should be done at every exit to the program after memory has been dynamically allocated, whether this is a successful exit or an exit due to some error.

**If you cannot work out how to do this** then you may use static allocation to get your code to function. You can do this very simply in the template code by replacing `char** map` in the Map struct with `char map[100][100]` which will always give you a 100x100 array. You cannot free static memory so no `free()` is needed if you do this.

### Modularity

5 marks are available for modularity and functional breakdown.

Consider breaking your code up into separate modules (files) which hold specific functions. For example, you might have `structs.h` and `structs.c` which contain functions and declarations which do things like set up structs or free their memory. 

For a simple project like this, 2 or 3 additional file should be enough to encapsulate all the functions.

Some marks are also available for having a range of functions rather than all code simple in a main() - using the functions provided in the template is sufficient for some marks.