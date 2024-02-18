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

./maze testcases/test1.txt > tmp;

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

./maze testcases/TooSmall.txt > tmp;

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze has invalid shape
echo -n "Testing for invalid shape of maze - "

./maze testcases/NotRectangle.txt > tmp;

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# handling a maze that does not have all the components (S, E)
echo -n "Testing for incompleted maze - "

./maze testcases/NoSorE.txt > tmp;

if grep -q "Invalid maze format." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

######## GAMEPLAY FUNCTIONALITY SECTION #######
echo -e "\n\n ~~ GAMEPLAY FUNCTIONALITY ~~"

# Testing for passing in bad inputs (Not WASD M)
echo -n "Handling invalid inputs - "

echo "N" | ./maze testcases/test1.txt > tmp

if grep -q "Invalid input. TIPS: <WASD for navigation> <M for map>";
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing if the coordinates of the player has been recorded and be ready to embed on to the map
echo -n "Testing map coordinates - "

echo "D" | ./maze testcases/test1.txt > tmp

if grep -q "Movement recorded." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# It keeps going towards 'X' (walls & edges)
echo -n "Opstacle handling - "

./maze testcases/test1.txt < inputs/touchingX.txt > tmp

if grep -q "Error: No pass-through." tmp;
then
    echo "PASS"
else
    echo "FAIL"
fi

# Testing for the ability to pass through ' ' the gap
#echo -n "Passing through - "

#./maze testcase/test1.txt < inputs/passThrough.txt > tmp

#if grep -q tmp;
#then
#    echo "PASS"
#else
#    echo "FAIL"
#fi

# Testing if the map is shown when "M" is entered
echo -n "Map showing - "

echo "M" | ./maze testcases/test1.txt > tmp;

if grep -q "Map loaded successfully." tmp;
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