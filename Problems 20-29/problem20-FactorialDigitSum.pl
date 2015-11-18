#!/usr/bin/perl
#http://projecteuler.net/problem=20

use bignum;

sub factorial{
    $_[0] == 1 ? return 1 : return $_[0] * factorial($_[0] - 1);
}

my $num = factorial(100);
my @digits = split //, $num;
my $sum = 0;
foreach $i (@digits){
    $sum += $i;
}
print $sum;