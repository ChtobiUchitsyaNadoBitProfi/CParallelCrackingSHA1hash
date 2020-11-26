# CParallelCrackingSHA1hash
This is a parallel cracking SHA1 hash algorithm on C with MPI

## Description
This is a parallel algorithm for cracking the SHA1 hash.
MPI is responsible for the parallel component of the program. Inside the code, I determine the size of the password and its alphabet. The algorithm will generate all possible passwords for a given password length and alphabet, then the program will hash each word in turn from the resulting dictionary and compare it with the SHA1 hash we have. When a collision occurs, the word hashed by the algorithm will be the result of the program. However, since I will be conducting a study of the dependence of acceleration on input data, the program will not end until it passes through the entire dictionary.