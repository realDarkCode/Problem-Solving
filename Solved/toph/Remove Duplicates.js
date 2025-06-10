// toph - Remove Duplicates

process.stdin.resume();
process.stdin.setEncoding("utf8");

let inputData = "";

process.stdin.on("data", function (chunk) {
  inputData += chunk;
});

process.stdin.on("end", function () {
  const inputLines = inputData.trim().split("\n");
  const testCases = parseInt(inputLines[0]);

  for (let i = 1; i <= testCases; i++) {
    const str = inputLines[i];
    const result = countCharacters(str);

    console.log(`Case #${i}:`);
    for (let [key, value] of result) {
      console.log(`${key} ${value}`);
    }
  }
});

function countCharacters(str) {
  const uniqueChar = new Map();
  for (let char of str) {
    if (uniqueChar.has(char)) {
      uniqueChar.set(char, uniqueChar.get(char) + 1);
    } else {
      uniqueChar.set(char, 1);
    }
  }
  return uniqueChar;
}
