foo()
{
  echo "function foo is ececuting"
}
echo "script starting "
foo
result="$(foo)";
echo "script ending"
echo $result
