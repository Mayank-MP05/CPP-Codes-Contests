let arr = [];

let ans = [];
let n = 5;
$(document).ready(() => {
  $("#draw-btn").on("click", () => {
    if (findSoln(arr, ans, 0, 0, n)) {
      console.log("Solution Exists");
    } else {
      console.log("No solution");
    }
  });
  $("#board-btn").on("click", () => {
    let [q, a] = generateRandomMatrix(n);
    arr = q;
    ans = a;
    drawTable(q, a);
  });
});

const generateRandomMatrix = (n) => {
  let que = [],
    ans = [];
  for (let i = 0; i < n; i++) {
    let arr = [],
      zeros = [];
    for (let j = 0; j < n; j++) {
      arr.push(Math.floor(Math.random() * 2));
      zeros.push(0);
    }
    que.push(arr);
    ans.push(zeros);
    zeros = [];
    arr = [];
  }
  return [que, ans];
};

const drawTable = (que, ans) => {
  let str = ``,
    str2 = ``;
  let n = que.length;
  for (let i = 0; i < n; i++) {
    str += `<tr>`;
    str2 += `<tr>`;
    for (let j = 0; j < n; j++) {
      if (!que[i][j]) cls = "red";
      else cls = "green";
      str += `<td class="${cls}">${que[i][j]}</td>`;

      if (!ans[i][j]) cls = "red";
      else cls = "green";
      str2 += `<td class="${cls}">${ans[i][j]}</td>`;
    }
    str += `</tr>`;
    str2 += `</tr>`;
  }
  const tbl1 = $("#Question");
  const tbl2 = $("#Answer");
  tbl1.html(str);
  tbl2.html(str2);
};

const drawAll = () => {};

const isSafe = (que, i, j, n) => {
  if (i > n - 1 || i < 0 || j < 0 || j > n - 1 || que[i][j] == 0) {
    return false;
  }
  return true;
};
// Two Way Maze Solution
const findSoln = (que, ans, i, j, n) => {
  console.log("------------------------------------");
  if (i == n - 1 && j == n - 1) {
    ans[n - 1][n - 1] = 1;
    console.log("Path Foundedx");
    drawTable(que, ans);
    return true;
  }

  if (isSafe(que, i + 1, j, n)) {
    ans[i][j] = 1;
    if (findSoln(que, ans, i + 1, j, n)) return true;
  }

  if (isSafe(que, i, j + 1, n)) {
    ans[i][j] = 1;
    if (findSoln(que, ans, i, j + 1, n)) return true;
  }
  ans[i][j] = 0;
  drawTable(que, ans);
  console.table(ans);

  return false;
};

// findSoln(arr, ans, 0, 0, 3);
