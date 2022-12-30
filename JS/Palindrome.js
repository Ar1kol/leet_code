var isPalindrome = function (x) {
    let stringNum = x.toString()
    let reverseString = stringNum.split("")
    reverseString = reverseString.reverse().join("");
    return stringNum === reverseString
};