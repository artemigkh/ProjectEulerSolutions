#!/usr/bin/perl
#http://projecteuler.net/problem=16

use bignum;

my $num = 2 ** 1000;
my @digits = split //, $num;
my $sum = 0;
foreach $i (@digits){
    $sum += $i;
}
print $sum;
