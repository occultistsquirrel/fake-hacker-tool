clear
echo "------------COMPUTER HACKING UTIL 1.0------------"
sleep 0.1
echo
sleep 0.1
echo
sleep 0.1
echo
sleep 0.1
echo
sleep 0.1
echo
sleep 0.1
echo
sleep 2
while [ true ]
do
    echo "MAINFRAME TERMINAL"
    sleep 2
    echo "ENTER PASSWORD:"
    read x
    sleep 2
    echo "01101101"
    sleep 0.1
    echo "10110101"
    sleep 0.1
    echo "01011101"
    sleep 2
    if [ "$x" == "HACK01101" ]; then
        echo "ACCESS GRANTED"
        sleep 2
        while [ true ]
        do
            ls /bin
        done
    else
        echo "ACCESS DENIED"
        sleep 2
    fi
done
