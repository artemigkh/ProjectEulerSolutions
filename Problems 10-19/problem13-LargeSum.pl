#!/usr/bin/perl
#http://projecteuler.net/problem=12
use bignum;
open(INPUTFILE, '<', "euler13input.txt");
my $sum = 0;
while (my $line = <INPUTFILE>){
	$sum += $line;
}
print substr($sum, 0, 10);