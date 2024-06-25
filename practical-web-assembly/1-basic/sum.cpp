extern "C" {
    unsigned sum(unsigned a, unsigned b) {
    return a + b;
  }
}


// Run the below command to convert cpp code into sum.html n sum.js
// emcc -O1 ./sum.cpp -o sum.html -sWASM=0 -sEXPORTED_FUNCTIONS='["_sum"]'

// Open browser console and execute the function using the below code
// ccall("sum", "number", "number, number", [10, 20])
