echo "1.) Circle  2.)Square  3.)Rectangle "
read a
case "$a" in 
1) echo "Enter radius"
    read r
    echo "3.14 * $r * $r" | bc;;
2) echo "Enter Side"
    read s
    echo `expr  $s \* $s `;; 
3) echo "Enter length"
   echo "Enter breadth"
    read l
    read b
    echo `expr $l \* $b `;;       
*) echo "Wrong"    
esac