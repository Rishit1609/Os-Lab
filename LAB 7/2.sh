i=7
k=0
while [ $i -gt 0 ]
do
    temp=$k
    while [ $temp -gt 0 ]
    do
        echo -n " "
        temp=`expr $temp - 1`
    done
    k=`expr $k + 1`
    j=$i
    while [ $j -gt 0 ]
    do
        echo -n "$j"
        j=`expr $j - 1`
    done
    echo ""
    i=`expr $i - 2`
done