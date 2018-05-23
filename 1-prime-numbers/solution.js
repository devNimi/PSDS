// number to check
const number = 10000000000000000000;
let primenNumber = null;
// initial state of number, given number must be greater than zero
if (number > 0) {
  primenNumber = true;
}

for (var i = (number-1); i > 1; i--) {
  if(number % i === 0){
    console.log('entered loop');
    primenNumber = false;
    break;
  }
}


if (primenNumber === true) {
  console.log('Number is prime');
} else {
  console.log(`number is not prime`);
}
