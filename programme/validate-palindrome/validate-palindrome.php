<?php
// Write a programme to validate palindrome

function Palindrome($MyString)
{
    $l = 0;
    $r = strlen($MyString) - 1;
    $flag = 0;

    while ($r > $l) {
        if ($MyString[$l] != $MyString[$r]) {
            $flag = 1;
            break;
        }
        $l++;
        $r--;
    }

    if ($flag == 0) {

        echo "True\n";
    } else {
        echo "False\n";
    }
}

$input = "radar";
echo "Input  : " . $input . "\n";
echo "Output : ";
Palindrome($input);
