# Decision-Making-CPP

### Experiment 5

**Aim -**
To do decision making using If-else.

Theory
Decision-making in programming allows for executing different code paths based on specific conditions. In C++, the `if` and `else` statements are essential constructs for implementing conditional logic and controlling the flow of execution.

### Experiment 5 [a]

### Aim
To determine whether a given integer is even or odd.

### Algorithm
1. **Start**
2. **Input**: Read an integer `a` from the user.
3. **Check**:
   - Compute the remainder of `a` when divided by 2 using the modulus operator (`%`).
   - If the remainder is `0`, then the number is even.
   - Otherwise, the number is odd.
4. **Output**:
   - Print "The number is even." if the remainder is `0`.
   - Print "The number is not even." if the remainder is not `0`.
5. **End**

### Theory
The algorithm uses the modulus operator `%` to determine if a number is even. An integer is considered even if it is divisible by 2 with no remainder. The modulus operator returns the remainder of a division operation. For example, `6 % 2` equals `0`, indicating that `6` is even. Conversely, `7 % 2` equals `1`, indicating that `7` is not even (i.e., it is odd).


### Experiment 5 [b]

### Aim
To determine whether a given floating-point number is positive or negative.

### Algorithm
1. **Start**
2. **Input**: Read a floating-point number `num` from the user.
3. **Check**:
   - If `num` is greater than `0`, then it is positive.
   - Otherwise, it is negative (including zero is not considered in this algorithm).
4. **Output**:
   - Print "The num is POSITIVE" if the number is greater than `0`.
   - Print "The num is NEGATIVE" if the number is not greater than `0`.
5. **End**

### Theory
The algorithm checks whether a floating-point number is positive or negative. By comparing the number to `0`:
- If the number is greater than `0`, it is positive.
- If the number is less than or equal to `0`, it is considered negative based on the given conditions (though typically, zero is neither positive nor negative, the given code considers it as negative).


### Experiment 5 [c]

### Aim
To determine the location of a point in a Cartesian coordinate system based on its coordinates.

### Algorithm
1. **Start**
2. **Input**: Read the coordinates `num1` (X-axis) and `num2` (Y-axis) from the user.
3. **Check**:
   - If `num1` is greater than `0` and `num2` is greater than `0`, the point is in the first quadrant.
   - If `num1` is less than `0` and `num2` is greater than `0`, the point is in the second quadrant.
   - If `num1` is less than `0` and `num2` is less than `0`, the point is in the third quadrant.
   - If `num1` is greater than `0` and `num2` is less than `0`, the point is in the fourth quadrant.
   - If `num1` is `0` and `num2` is not `0`, or `num1` is not `0` and `num2` is `0`, the point is on the axis.
   - If both `num1` and `num2` are `0`, the point is at the origin.
4. **Output**:
   - Print the corresponding location of the point based on the conditions.
5. **End**

### Theory
The code determines the location of a point in the Cartesian coordinate system based on its X and Y coordinates:
- **First Quadrant**: Both coordinates are positive.
- **Second Quadrant**: X-coordinate is negative, Y-coordinate is positive.
- **Third Quadrant**: Both coordinates are negative.
- **Fourth Quadrant**: X-coordinate is positive, Y-coordinate is negative.
- **On the Axis**: Either the X-coordinate or Y-coordinate is zero, but not both.
- **At the Origin**: Both X and Y coordinates are zero.


### Experiment 5 [d]

### Aim
To perform basic arithmetic operations using a switch case statement.

### Algorithm
1. **Start**
2. **Input**: Display the menu and read the chosen operation `x`, and two numbers `num1` and `num2` from the user.
3. **Switch Case**:
   - **Case 1**: Perform addition of `num1` and `num2`.
   - **Case 2**: Perform subtraction of `num2` from `num1`.
   - **Case 3**: Perform division of `num1` by `num2`. Handle division by zero.
   - **Case 4**: Perform multiplication of `num1` and `num2`.
   - **Default**: Handle invalid operations.
4. **Output**: Display the result of the selected operation.
5. **End**

### Theory
The code implements a simple calculator using a switch case to perform four basic arithmetic operations: addition, subtraction, division, and multiplication. It prompts the user to choose an operation and input two numbers. Based on the selected operation, the switch statement executes the corresponding arithmetic operation and displays the result. If division by zero is attempted, an error message is shown. An additional default case handles invalid operation choices.



