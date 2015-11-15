python gennr.py

gcc -O3 1.c -o 1.out
gcc -O3 1extrem.c -o 1extrem.out
gcc -O3 2.c -o 2.out

echo "python";
time python sumator.py;
echo "============";

echo "pypy";
time pypy sumator.py;
echo "============";

echo "optimization";
time ./1.out;
echo "============";

echo "normal";
time ./2.out;
echo "============";

echo "optimization extrem";
time ./1extrem.out;
echo "============";

rm 1.out;
rm 2.out;
rm 1extrem.out;
