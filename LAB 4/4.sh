read a
r=0
t=$a
while [ $t -gt 0 ]
do
    r=`expr $r \* 10`
    s=`expr $t % 10`
    r=`expr $r + $s`
    t=`expr $t / 10`
done
if [ $r -eq $a ]
then
    echo "Palindrome"
else
    echo "Not Palindrome"
fi
