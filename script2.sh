#!/bin/bash

find ./dir1
find ./dir2
find "file1"
find "link1"

cat > script3.sh << EOF
#!/bin/bash

rm -rf dir1
rm -rf dir2
rm -rf file1
rm -rf link1
EOF

chmod 700 script3.sh

./script3.sh

ls
