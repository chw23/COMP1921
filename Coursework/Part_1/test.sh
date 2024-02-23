#!/bin/bash

echo -e "\n~~~~~~~ TEST START ~~~~~~~" 

###### INPUT HANDLING SECTION #########
echo -e "\n\n~~ FILE INPUT ~~"

# testing for not passing a file into the programme
echo -n "Testing no file - "

./maze > tmp

if grep -q "Usage: maze <filename>" tmp;
then 
    echo "PASS"
else
    echo "FAIL"
fi

# testing for wrong file name
echo -n "Testing file not found - "

./maze testcases/BadName.txt > tmp

if grep -q "File not found." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# testing for wrong file type
echo -n "Handling invalid file type - "

./maze testcases/CSV.csv > tmp

if grep -q "Wrong file type." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# testing for handling multiple maze files
echo -n "Testing multiple maze files - "

./maze testcases/test1.txt testcases/test2.txt > tmp

if grep -q "Usage: maze <filename>" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# SUCCESSFUL
echo -n "Testing correct file - "

./maze testcases/test1.txt > tmp

if grep -q "File loaded sucessfully." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

######### FILE FORMAT HANDLING SECTION ############
echo -e "\n\n ~~ FILE FORMAT ~~"

# handling a maze with invalid size
echo -n "Testing for invalid size of maze - "

./maze testcases/TooSmall.txt > tmp

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze has invalid shape
echo -n "Testing for invalid shape of maze - "

./maze testcases/NotRectangle.txt > tmp

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze that does not have all the components (S)
echo -n "Testing for incompleted maze (No S) - "

./maze testcases/NoS.txt > tmp

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze that does not have all the components (E)
echo -n "Testing for incompleted maze (No E) - "

./maze testcases/NoE.txt > tmp

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze that does not have all the components (S and E)
echo -n "Testing for incompleted maze (No S and E) - "

./maze testcases/NoSandE.txt > tmp

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

######## GAMEPLAY FUNCTIONALITY SECTION #######
echo -e "\n\n ~~ GAMEPLAY FUNCTIONALITY ~~"

# Testing for passing in bad inputs (Not WASD M)
echo -n "Handling invalid inputs (N) - "

echo "N" | ./maze testcases/test1.txt > tmp

if grep -q "Invalid input. TIPS: <WASD for navigation> <M for map>" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing for passing a number
echo -n "Handling invalid inputs (0) - "

echo "0" | ./maze testcases/test1.txt > tmp

if grep -q "Invalid input. TIPS: <WASD for navigation> <M for map>" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi


# Testing for passing a symbol
echo -n "Handling invalid inputs (!) - "

echo "!" | ./maze testcases/test1/txt > tmp

if grep -q "Invalid input. TIPS: <WASD for navigation> <M for map>" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi


# Testing to go right
echo -n "Testing going right - "

echo "D" | ./maze testcases/test1.txt > tmp

if grep -q "You went to the right!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing to go left
echo -n "Testing going left - "

echo "A" | ./maze testcases/test1.txt > tmp

if grep -q "You went to the left!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing to go up
echo -n "Testing going up - "

echo "W" | ./maze testcases/test1.txt > tmp

if grep -q "You went up!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

#Testing to go down
echo -n "Testing going down - "

echo "S" | ./maze testcases/test1.txt > tmp

if grep -q "You went down!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# It keeps going towards 'X' (walls & edges)
echo -n "Opstacle handling - "

./maze testcases/test1.txt < inputs/touchingX.txt > tmp

if grep -q "You hit the wall :(" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing if the map is shown when "M" is entered
echo -n "Map showing - "

echo "M" | ./maze testcases/test1.txt > tmp;

if grep -q "~The map has shown~" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing if the player can actually win by touching "E"
echo -n "Wining the game - "

./maze testcase/test2.txt < inputs/win.txt > tmp

if grep -q "Congratulations!" tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

rm -f tmp