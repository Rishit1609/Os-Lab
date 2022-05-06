i=1
while [ $i -le 4 ]
do
    j=1
    jj=`expr 4 - $i`
    while [ $j -le $jj ]  
    do
        echo -n "  "
        j=`expr $j + 1`
    done
    k=1
    l=`expr 2 \* $i - 1`
    kk=`expr 2 \* $i - 1`
    while [ $k -le $kk ]
    do
        if [ $k -le $l ]
        then
            echo -n $k" "
        else
            echo -n $l" "
        fi
        k=`expr $k + 1`
        l=`expr $l - 1`
    done
echo " "
i=`expr $i + 1`
done