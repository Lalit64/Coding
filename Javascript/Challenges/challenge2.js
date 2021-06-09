// Fibonacci Sequence
function fibonacci(n){
    let zero = 0;
    let one = 1;
    let temp;

    while (n > 0){
        temp = one;
        one = one + zero;
        zero = temp;
        n--;
        console.log(zero);
    }

}

// Don't change anything below this line
fibonacci(1923)