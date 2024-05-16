<?php
    function checkPrime($num) {
        $c = 0;

        if ($num == 1) echo "The number is 1, which is neither prime nor composite";

        for ($i = 1; $i <= $num; $i++) {
            if ($num % $i == 0) $c++;
        }

        if ($c == 2) echo "The number $num is prime.";
        else echo "The number $num is composite.";
    }

    $n = 69;
    checkPrime($n);
?>
