var romanToInt = function (s) {
  s = s.split("");
  for (let i = 0; i < s.length; i++) {
    let sum = 0;
    if (s[i] === "I") {
      if (s[i + 1] === "V" || "X") {
        sum -= 1;
      } else {
        sum += 1;
      }
    } else if (s[i] === "V") {
      sum += 5;
    } else if (s[i] === "X") {
      if (s[i + 1] === "L" || "C") {
        sum -= 10;
      } else {
        sum += 10;
      }
    } else if (s[i] === "L") {
      sum += 50;
    } else if (s[i] === "C") {
      if (s[i + 1] === "D" || "M") {
        sum -= 100;
      } else {
        sum += 100;
      }
    } else if (s[i] === "D") {
      sum += 500;
    } else {
      sum += 500;
    }
  }
};



var romanToInt2 = function(s) {
    const sym = {
      'I': 1,
      'V': 5,
      'X': 10,
      'L': 50,
      'C': 100,
      'D': 500,
      'M': 1000
  }

  let result = 0;

  for (let i = 0; i < s.length; i++) {
      const cur = sym[s[i]];
      const next = sym[s[i + 1]];

      if (cur < next) {
          result += next - cur;
          i++;
      } else {
          result += cur;
      }
  }

  return result;
};
