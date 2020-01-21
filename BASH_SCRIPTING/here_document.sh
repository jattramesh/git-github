#!/bin/sh
ed test.txt <<!FUNKY!
3
d
.,\$s/is/was/
3
q
!FUNKY!
exit 0
