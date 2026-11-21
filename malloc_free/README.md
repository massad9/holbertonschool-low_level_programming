# 0x0A. malloc, free

## 0. Float like a butterfly, sting like a bee

Implement a function that creates an array of characters and initializes it with a specific character.

### Prototype
char *create_array(unsigned int size, char c);

### Requirements
- Returns NULL if size is 0.
- Allocates memory using malloc.
- Initializes every element with the character c.
- Returns NULL if memory allocation fails.
- Returns a pointer to the allocated array on success.
