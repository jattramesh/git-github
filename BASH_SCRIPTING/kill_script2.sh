if [ -e /tmp/test.py.pid ]; then
kill 'cat /tmp/test.py.pid'
rm /tmp/test.py.pid
else
  echo "test.py is not running"
fi
