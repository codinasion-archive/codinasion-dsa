# Write a programme to validate palindrome

function palindrome(input)
    reversed = join(reverse(split(input, "")), "")
    return input == reversed

input = "madam"
println("Input  : ", input)
println("Output : ", palindrome(input))
