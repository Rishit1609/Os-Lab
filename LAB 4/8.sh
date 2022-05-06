i=1
while [ $i -le 5 ]
do
    j=$i
    while [ $j -lt 5 ]
    do
        echo -n " "
        j=`expr $j + 1`
    done
    j=$i
    while [ $j -ge 1 ]
    do
        echo -n "$j"
        j=`expr $j - 1`
    done
    echo " "
    i=`expr $i + 1`
done