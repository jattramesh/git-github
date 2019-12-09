
exec 3</dev/tcp/www.google.com/80

printf 'GET / HTTP/1.0\r\n\r\n' >&3

cat <&3

# result of google.com default web page will be printed stdout.
printf 'HI\n' >/dev/udp/192.168.1.1/6666 
#it will send u a udp message containing HI\n to a listner on 192.168.1.1:6666

