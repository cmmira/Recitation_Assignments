# Recitation_Assignments
This C++ program is a combination of 3 recitation assignments that helped introduce important concepts for my coding course such as string streams, randomization, reading in files, and mapping. 
Each function in the program for each assignment is divided using input from command line arguments:
- "r1"
- "r2"
- "r3"

## Recitation Assignment 1 "r1"
- Program taht reads integers from standard input.
- Prints out the largest integer read in, on a line by itself.
- Any erroneous input should be detected and ignored.
- In the case no integers are provided, prints NO INTEGERS and stops.

## Recitation Assignment 2 "r2"
- Program that generates a sequence of 26 random letters, without duplication, one letter per output line. 

## Recitation Assignment 3 "r3"
- Given a well-formed dictionary file name dict, the program will read the dictionary file and use it to populate a map, one entry per pair. By well-formed, it means that the file is a correct dictionary and has no errors for the functionality of this program.
- The key is the first letter (plaintext) and the second is the second letter (ciphertext).
- A second map is also created by traversing the the entire first map. For the second map, the key should be the ciphertext and the value should be the plaintext.
- The first map will be used to caesar-cipher encrypt the string "Hello, world\n.", printing out the result.
- The second map will be used to caesar-cipher decrypt the result of the encryption, printing out the result.
