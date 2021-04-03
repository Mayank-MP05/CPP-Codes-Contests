const getWays = (n) => {
  if (n <= 0) {
    return 0;
  }
  if (n > 0 && n <= 1) {
    return n;
  }
  return 1 + getWays(n - 1) + getWays(n - 2) + getWays(n - 3);
};
console.log(getWays(1));
console.log(getWays(2));
console.log(getWays(4));
console.log(getWays(5));
