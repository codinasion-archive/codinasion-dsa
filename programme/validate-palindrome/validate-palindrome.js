// Write a programme to Validate Palindrom string

function palindrome(str) {
  var re = /[\W_]/g;

  var lowRegStr = str.toLowerCase().replace(re, "");

  var reverseStr = lowRegStr.split("").reverse().join("");

  return reverseStr === lowRegStr;
}

const str1 = "level";
console.log("Input  : " + str1);
console.log("Output : " + palindrome(str1));

console.log("\n");

const str2 = "coding";
console.log("Input  : " + str2);
console.log("Output : " + palindrome(str2));
