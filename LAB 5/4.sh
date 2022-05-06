echo "Enter a number"
read num
b=0
r=0
p=1
while [ $num -gt 0 ]
do
    r=`expr $num % 2`
    num=`expr $num / 2`
    add=`expr $r \* $p`
    b=`expr $b + $add`
    p=`expr $p \* 10`
done
echo $b