a=$1
b = `expr ($a / 100) %10 `
if [ ($a % 10) -eq $b ]
then 
    echo Yes
else
    echo No    
fi        
