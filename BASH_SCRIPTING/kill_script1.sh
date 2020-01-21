if [ ! -e /tmp/test.py.pid ]; then
python  test.py &
echo $! > /tmp/test.py.pid
else
  echo -n "Error : the process is alreday running with pid"
  cat /tmp/test.py.pid
  echo
fi
