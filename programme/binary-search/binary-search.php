<?php
/**
 * Binary search implementation
 *
 * @param array $arr The sorted array
 * @param int $value The value needs to be search in an array
 * @return int The index of the search key if found, otherwise -1
 */
function binarySearch($arr, $value)
{

    $low = 0;
    $high = count($arr) - 1;
    while ($low <= $high) {
        //calculate mid
        $mid = ($low + $high) / 2;
/*
If value we are searching found at mid position
then return it's index
 */
        if ($value == $arr[$mid]) {
            return $mid;
        } else if ($value < $arr[$mid]) {
            $high = $mid - 1;
        } else if ($value > $arr[$mid + 1]) {
            $low = $mid + 1;
        }
    }
    return -1;
}
$arr = array(1, 3, 5, 6, 7, 8, 9);
$value = 6;

echo "Array  : " . implode(', ', $arr) . "\n";
echo "Target : " . $value . "\n";

/* Call binary search function,
which returns index at which value is found.
 */

$index = binarySearch($arr, $value);

echo "Output : ";
//if index is -1, then value is not present
if ($index == -1) {
    echo "search key is not found";
} else {
    echo "search element is found at index " . $index;
}
echo "\n";
