const validTC = [
  "2",
  "0089",
  "-0.1",
  "+3.14",
  "4.",
  "-.9",
  "2e10",
  "-90E3",
  "3e+7",
  "+6e-1",
  "53.5e93",
  "-123.456e789",
];
const NonValidTC = [
  "abc",
  "1a",
  "1e",
  "e3",
  "99e2.5",
  "--6",
  "-+3",
  "95a54e53",
];

var isNumber = function (s) {
  let ar1 = s.split("e");
  let ar2 = s.split("E");
  let arr;
  console.log(ar1);
};

isNumber("1e");
