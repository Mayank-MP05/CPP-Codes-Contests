/***
 * Consitions
 * - Sum should be minimum
 * - Product must be greater than number
 */

const getProdSum = (n) => {
  let i,
    j,
    r = Math.ceil(Math.sqrt(n + 1));
  let s = 99999999999;
  for (i = 1; i <= r; i++) {
    for (j = 1; j <= r; j++) {
      sum = i + j;
      if (s > sum && i * j >= n + 1) {
        s = sum;
      }
    }
  }
  return s;
};

console.log(getProdSum(16));
console.log(getProdSum(1));
console.log(getProdSum(24));
console.log(getProdSum(21));
console.log(getProdSum(1654));
console.log(getProdSum(384));
