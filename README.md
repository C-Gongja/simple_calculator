# simple_calculator

## Description
- Basic arithmetic operations: addition (`+`), subtraction (`-`), multiplication (`*`), division (`/`),  mod(`mod()`), and square (`square()`). 
- Scientific operations: sinOfDegree(`sinOfDegree`) and cosOfDegree(`cosOfDegree`)
- Self-defined function: getIntPart(`getIntPart`), getDecimalPart(`getDecimalPart`), getXdigit(`getXdigit`), sumFibonacci(`sumFibonacci`), sumIntPart(`sumIntPart`), sumDecimalPart(`sumDecimalPart`), crossMultiply(`crossMultiply`), and factorial(`factorial`).


## How to run GoogleTest
- Make a build directory and go to it `mkdir build && cd build`
- You can ask `CMake` to generate a `Makefile` that copmiles: `cmake -DCMAKE_BUILD_TYPE=asan ..`
- Compile the project `cmake --build .` 
- There will be a `CalculatorTests`, you can run it to test your code. `./CalculatorTests`
