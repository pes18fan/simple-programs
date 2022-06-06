<?php

function palindromeChecker($n) {
    $rev = 0.0;
    $rem = 0.0;
    $init = $n;

    for ($rev = 0; $n >= 1;) {
	$rev *= 10;
	$rem = $n % 10;
	$rev += $rem;
	$n /= 10;
    }

    echo "$rev\n";

    if ($rev == $init) echo "$init is a palindrome.";
    else echo "$init is not a palindrome.";
}

$num = 69;
palindromeChecker($num);

?>
