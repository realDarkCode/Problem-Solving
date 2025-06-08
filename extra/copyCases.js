(() => {
  const rows = document.querySelectorAll("table tbody tr");
  let inputText = "";
  let outputText = "";

  rows.forEach((row) => {
    const input = row.querySelector("td:nth-child(1) p");
    const output = row.querySelector("td:nth-child(2) p");

    if (input) inputText += input.innerText.trim() + "\n\n";
    if (output) outputText += output.innerText.trim() + "\n\n";
  });

  const result = `${inputText.trim()}\n${outputText.trim()}`;
  copy(result);
  alert("Copied all input and output samples with real newlines!");
})();
