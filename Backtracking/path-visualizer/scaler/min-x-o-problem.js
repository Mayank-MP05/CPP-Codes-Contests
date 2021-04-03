const getMinDistance = (str) => {
  let n = str.length;
  let l = 0;
  h = n - 1;
  min = 9999999999;
  for (let i = 0; i < n; i++) {
    if (str[i] !== ".") {
      for (let j = i + 1; j < n; j++) {
        if (str[i] === "o" && str[j] === "x")
          if (min > j - i) {
            min = j - i;
            break;
          }
        if (str[i] === "x" && str[j] === "o")
          if (min > j - i) {
            min = j - i;
            break;
          }
      }
    }
  }
  if (min === 9999999999) return -1;
  return min - 1;
};

console.log(getMinDistance("...xxoxo...."));
console.log(getMinDistance("x..o."));
console.log(getMinDistance("x.....xxxx.....ooooo....xxxx"));
console.log(getMinDistance("x..ooxx"));
console.log(getMinDistance("x.....xxxx.......xxxx"));
console.log(getMinDistance("o.....oooo.......oooo"));
console.log(getMinDistance("x.....ooooo....xxxx"));
