echo "Enter number and power"
read a
read p
ans=1
while [ $p -gt 0 ]
do
    ans=`expr $ans \* $a`
    p=`expr $p - 1`
done
echo "$ans"