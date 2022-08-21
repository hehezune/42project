ifconfig | grep "ether " | awk '{print $2}' | tr -d ' ' | tr -d '\t'
