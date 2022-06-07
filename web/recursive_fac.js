// calculates the factorial recursively
function fac(n) {
    if (n < 0) return 0;
    else if (n == 0 || n == 1) return 1;
    else return (n * fac(n-1));
}

console.log(fac(6));
