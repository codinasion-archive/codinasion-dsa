function palindrome(input)

    reversed = join(reverse(split(input,"")),"")

    return input == reversed

end

