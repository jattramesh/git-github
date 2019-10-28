#!/bin/sh
sample_text="global variable"
foo()
{
  local sample_text="local variable"
  echo "function foo is executing"
  echo $sample_text
}
echo "scripting start"
echo $sample_text
foo
echo "scripting ended"
echo $sample_text
exit 0
