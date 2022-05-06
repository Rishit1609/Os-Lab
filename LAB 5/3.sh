echo "Enter a non leap year"
read year
p=5
while [ $p -gt 0 ]; 
do
    year=`expr $year + 1`
    if [ $(expr $year % 400) -eq 0 ]; then
        echo "$year "
        p=`expr $p - 1`
    elif [ $(expr $year % 100) -eq 0 ]; then
        continue
    elif [ $(expr $year % 4) -eq 0 ]; then
        echo "$year "
        p=`expr $p - 1`
    else
        continue
    fi
done
