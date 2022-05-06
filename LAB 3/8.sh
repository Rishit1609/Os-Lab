echo "Enter marks in three subject "
read a 
read b
read c
sum=`expr $a + $b + $c`
avg=`expr $sum / 3`
ans=`expr $avg / 10`
case "$ans" in
10) echo "O grade";;
9) echo "O grade";;
8) echo "A grade";;
7) echo "B grade";;
6) echo "C grade";;
5) echo "D grade";;
4) echo "E grade";;
*) echo "F grade";;
esac


