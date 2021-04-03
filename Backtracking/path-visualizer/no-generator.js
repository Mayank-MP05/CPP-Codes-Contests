/*
const printSubs = (str) => {
  let n = str.length;

  if (n === 0) {
    return;
  }
  for (let i = 1; i <= n; i++) {
    printSubs(str.slice(i, n));
    console.log(str.slice(0, i));
    //console.log("i to n", str.slice(i, n));
    printSubs(str.slice(i, n));
  }
};

printSubs("abc");
// console.log("object".slice(2, 3));
*/
const isBalanced = (str) => {
  let c = 0;
  for (let i = 0; i < str.length; i++) {
    if (str[i] === "(") {
      c++;
    } else c--;
    if (c < 0) return false;
  }
  return c === 0;
};
const util = (str, pos, n) => {
  if (pos === n - 1 && isBalanced(str)) {
    console.log(str);
    return;
  }
  if (str.length === n) return;
  util((str += "("), pos + 1, n);
  util((str += ")"), pos + 1, n);
};

const parenthesis = (n) => {
  util("", 0, 2 * n);
};

parenthesis(1);
