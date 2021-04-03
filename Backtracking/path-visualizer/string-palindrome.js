const isPalindrome = (str) => {
  let n = str.length;
  if (n === 1) return true;
  for (let i = 0; i < n / 2; i++) {
    if (str[i] !== str[n - i - 1]) return false;
  }
  return true;
};

//console.log(isPalindrome("bab"));
const printSubByLen = (str, len = 1, pos = 0) => {
  let n = str.length;
  if (pos + len >= n) return;
  console.log(pos + len, n);
  //console.log(str.slice(pos, pos + len));
  if (isPalindrome(str.slice(pos, pos + len))) {
    console.log(str.slice(pos, pos + len));
    printSubByLen(str, len, len + pos + 1);
  } else {
    printSubByLen(str, len, pos + 1);
  }
};

//printSubByLen("Mayanka", 3, 0);

const printAll = (str) => {
  for (let l = 1; l <= str.length; l++) {
    console.log(`Length : ${l}`);
    printSubByLen(str, l, 0);
  }
};

printAll("abbab");
