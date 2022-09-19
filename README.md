
# Recitation_Assignments
This C++ program is a combination of 3 recitation assignments that introduced important C++ concepts for the course project of encryption. The program has each function for each assignment divided using input from the command line argument:
- “r1”
- “r2”
- “r3”

## Installation and Execution
To run the C++, MinGW was installed with versions of GCC 11.2.0 and Boost 1.77.0.
- http://bit.ly/mingw10

This program is run through Windows 10 Visual Studio Code using:
- __C/C++__ Microsoft Extension
- __Code Runner__ Jun Han Extension

Installing the code was done using PowerShell and the command:
```powershell
git clone https://github.com/cmmira/Recitation_Assignments.git 
```

Running the code was done using Code Runner with the shortcut __Ctrl+Alt+N__, creating the input on the PowerShell, which could also be modified to input the necessary Command Line Argument:
``` powershell
cd “<Recitation_Assignments File Location>” ; if ($?) { g++ Recitation.cpp -o Recitation } ; if ($?) { .\Recitation <Command Line Argument> }
```

## _“r1”_ Recitation Assignment 1
Detecting the largest integer from the numbers taken in from input.
- Reads integers from standard input
- Prints out the largest integer read in, on a line by itself on standard output.
- Any erroneous input should be detected and ignored.
- In the case no integers are provided, prints NO INTEGERS and stops.

## _“r2”_ Recitation Assignment 2
Random sorting of letters in the alphabet
- Program generates a sequence of 26 random letters, without duplication, one letter per output line using standard output.
 
## _“r3”_ Recitation Assignment 3
Creating map containers to encrypt and decrypt a string.
- Given a well-formed dictionary file name _”dict.txt”_, the program will read the file and populate a map, one entry per pair. By well-formed, the file will be a correct dictionary with no errors for the functionality of this program.
- For the first map, the key is the first letter (plaintext) and the second letter is the value (ciphertext).
- For the second map, it will be created by traversing the entire first map. In this case the key will be the ciphertext and the value will be the plaintext.
- The first map will be used to caesar-cipher encrypt the string “Hello, world\n”, printing out the result on standard output.
- The second map will be used to caesar-cipher decrypt the result of the encryption, printing out the result on standard output.

