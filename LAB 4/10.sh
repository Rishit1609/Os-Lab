blank=8
star=1
i=1
while [ $i -le 9 ]
do
    j=1
    while [ $j -le $blank ]
    do
        echo -n "  "
        j=`expr $j + 1`
    done
    k=1
    while [ $k -le $star ]
    do
        echo -n "* "
        k=`expr $k + 1`
    done
    if [ $blank -gt $i ]
    then
        blank=`expr $blank - 1`
        star=`expr $star + 2`
    fi
    if [ $blank -lt $i ]
    then
        blank=`expr $blank + 1`
        star=`expr $star - 2`
    fi
    echo " "
    i=`expr $i + 1`
done