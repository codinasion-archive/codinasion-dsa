# Write a programme to validate palindrome

function palindrome(input)
    reversed = join(reverse(split(input, "")), "")
    return input == reversed
end

input = "madam"
println("Input  : ", input)
println("Output : ", palindrome(input))
