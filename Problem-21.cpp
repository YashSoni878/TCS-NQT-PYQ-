An English lecture at Hacker Elementary School is aimed at teaching students the letters of the alphabet.
The students are provided with a string word that consists of lowercase English letters. In one move, 
they can choose any index i and let the character at that index be c. Then, the first occurrence of 
c to the left of i and the first occurrence of c to the right of i are deleted (Note: the operation 
can still be carried out even if either the left or right occurrence doesn't exist). For example, 
if word = "adabacaea", and if index 4 is chosen (0-based), the first occurrence of 'a' to the left 
and right of index 4 (bold, indices 2 and 6) are deleted leaving word "adbacea".
Find the minimum number of moves the students need to perform in order to get a word of minimal length.

Example:
Consider word = "baabacaa".
The following moves are optimal.
1. Choose index 0. "baabacaa", then word "baaacaa". Delete the b to its right at index 3. 
There is no b to its left so the operation is finished.
2. Now, choose index 2. baaacaa", then word = "bacaa".
3. Now. choose index 3. "bacaa", then word = "bca".
The word cannot be reduced further. The answer is 3.