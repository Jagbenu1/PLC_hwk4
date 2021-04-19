#!/C:/Strawberry/perl/bin/perl
use warnings;
$x = 10;
$y = 30;
sub f 
{ 
   return $x;
}
sub a
{
    return $y;
}
sub g 
{ 
   # Since local is used, x uses
   # dynamic scoping. 
   local $x = 20; 
   return f(); 
}
sub h
{
    my $y = 25;
    return a();
}
print g()."\n";
print h()."\n";