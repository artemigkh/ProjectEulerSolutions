#!/usr/bin/perl
#http://projecteuler.net/problem=15

use bignum;

# This is a simple combinatorics problem that can be reduced to 
# "How many ways are there of choosing 20 down movements among 40
# right and down movements". Therefore we have to solve the equation
# 40 choose 20, which is done below is a simple implenentation of  
# the choose formula.


sub factorial{
    $_[0] == 1 ? return 1 : return $_[0] * factorial($_[0] - 1);
}

print factorial(40) / (factorial(20) * factorial(40 - 20));
