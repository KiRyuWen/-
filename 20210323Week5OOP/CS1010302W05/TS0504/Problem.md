# Solve step
Stupid way to solve sudoku
1. check square
2. check row
3. check column
# Problem I met
1. input with comma

2. input until EOF

3.the logic about my code should be careful such as check3x3...

# Solution
1.  stop to read comma until j==8

2. I need to input first num and input the comma too

3.I should not let the sudokuOrNot=check3x3.. =checkrow... etc.
I should just use
if(check3x3()==false)
 sudokuOrNot=false;