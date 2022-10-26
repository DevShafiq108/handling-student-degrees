# handling-student-degrees

Specification
. It consists in writing test programs in C programming language to assess the quality of a simple pseudo random number generator based on the rand() function of “stdlib.h”. Please notice that in this task we are NOT seeking generating real random numbers but just interested in investigating the distribution of pseudo random numbers generated. The tests you are going to implement were theoretically suggested by Kendall & Babbington-Smith over a series of papers published in 1938/39.
The rand() function returns a pseudo-random integer between 0 and RAND_MAX, which is defined in stdlib.h. You should NOT replace it with a constant since its value may vary with platforms. You need to rescale this value and fit it between 0 and 10 (0 included, 10 excluded). To generate a single pseudo random number between 0 (included) and 10 in your code, you must use the following: randon_number=(int)(10.0*rand()/(RAND_MAX+ 1.0));
 

 
Please notice it is required to use this instruction for all number generation instructions, so do not make any change of this. Also, do NOT use or make change to the random variable generator seeds. This may result in different distribution and failure to pass the tests.
Write a single code, randTest.c, that uses the instruction above to generate every single number and implements all the tests given in table 2. Use the parsing command line arguments through the main function (with a single character parameter after the file name) to select and perform a single test in the runtime. E.g., suppose the executable file is named, ranTest.out, if in the runtime one wishes running the first test, they just have to type “ranTest.out 1”, if the second, “ranTest.out 2”, etc. 

Table 2: Tests
   Test
      Deception
    1. Mean test
   Calculate and display the mean of 1000 random numbers. The result should be close to 4.5.
       2. Frequency test
  Tabulate the percentage of each digit (0 throughout 9) in 10,000 generated numbers. Each Is expected to be close (roughly) to 10%.
    3. Serial test
        Generate 10,000 pairs of numbers. Tabulate the percentage of each pair, 00, 01,02, ....., 99. This time we would expect roughly 1% in each category.
      4. Poker test
   Generate four digits at a time, and repeat 1,000 times (a thousand sets of 4 digits in total). Tabulate the cardinalities of the sets (the four digit tuples) as: i) all the same (e.g. 4444), ii) 3 digits the same (e.g. 4443, 3444 or 4344), iii) two pairs (e.g. 4334, 4433), iv) one pair (e.g. 4324 or4342), or v) none identical. In theory we would expect 1, 36, 27, 432 & 504 for each set respectively for a thousand sets of numbers (i.e., 4,000 digits). You will not necessarily get those exact numbers.
 
     5. Pocker Test using a file
     Generate 4,000 random digits and save them in a text file (using ASCII coding), where characters are separated by spaces and each line includes four characters. Repeat the poker test by reading the numbers from the file.





  For this part (Part A.1: individual E-portfolio), please upload:
• A single .c source file that is clearly organized and well commented. Please name it randTest. Please make sure that the code correctly compiles with gcc without any error. Failure to compile means failing all the test.
• Self-assessment form: using the template provided.
Instructions on submission will be given in due time.
