<?php
    function LinearSearch($arr, $x) {
        for($i = 0; $i < sizeof($arr); $i++) {
            if($arr[$i] == $x) return $i;
        }
        return -1;
    }
    $arr = array( 10, 20, 80, 30, 60, 50 );
    $target = 30;
    echo LinearSearch($arr, $target);
 ?>