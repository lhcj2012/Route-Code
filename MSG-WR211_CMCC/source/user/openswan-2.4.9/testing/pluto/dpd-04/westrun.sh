# we can transmit in the clear
ping -q -c 8 -n 192.1.2.23
# bring up the tunnel
ipsec auto --up west-east
ipsec auto --up west-eastnet
ipsec auto --up westnet-east

# use the tunnel
ping -q -c 8 -n 192.1.2.23
# show the tunnel
ipsec eroute

: Let R_U_THERE packets flow
sleep 20

: Create the block
iptables -I INPUT -s 192.1.2.23/32 -d 0/0 -j DROP
sleep 20

: DPD should have triggered now
ipsec eroute


