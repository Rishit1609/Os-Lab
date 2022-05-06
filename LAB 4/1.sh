a=10
while [ $a -le 100 ]
do
    if [ `expr $a % 3` -eq 0 ]
        then
            echo $a
    fi
    a=`expr $a + 1`
done

