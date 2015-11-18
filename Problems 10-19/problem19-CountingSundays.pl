#!/usr/bin/perl
#http://projecteuler.net/problem=19

use Date::Calc;

my $counter = 0;
for(my $year = 1901; $year <= 2000; $year++){
	for(my $month = 1; $month <= 12; $month++){
		$counter++ if Date::Calc::Day_of_Week($year, $month, 1) == 7;
	}
}
print $counter;
