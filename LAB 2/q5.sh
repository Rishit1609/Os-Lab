echo enter K1 M1
read K 
read M
echo enter K2 M2
read k 
read m
A=`expr $M + $m`
A=`expr $A % 1000`
l=`expr $M + $m`
l=`expr $l / 1000`
B=`expr $K + $k + $l`
echo $B km $A m