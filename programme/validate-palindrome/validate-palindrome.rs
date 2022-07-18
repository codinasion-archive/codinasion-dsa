// Write a programme to Validate Palindrom string
use std::io::{self, Write};

fn validate_palindrome(s: &mut String) -> bool {
    //convert input string to lowercase in place
    s.make_ascii_lowercase();
    //reverse the input string
    let reverse_string: String = s.chars().rev().collect();
    //compare reversed string with input string
    if *s == reverse_string {
        return true;
    } else {
        return false;
    }
}

fn main() {
    let mut input = String::new();
    print!("Input  : ");
    let _ = io::stdout().flush();
    io::stdin()
        .read_line(&mut input)
        .expect("Error reading from STDIN");
    let is_palindrome = validate_palindrome(&mut input);
    println!("Output : {}", is_palindrome);
}
