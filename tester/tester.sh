make
make clean
clear
printf "\n"
echo "3 => max 3"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (0..2).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "3 => max 3"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (-1..1).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "5 => max 12"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (0..4).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "5 => max 12"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (-2..2).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "100 => max 700"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (0..99).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "100 => max 700"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (-50..49).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "500 => max 5500"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (0..499).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"
echo "500 => max 5500"
echo "==="
count=10
for i in $(seq $count); do
	ARGS=`ruby -e "puts (-250..249).to_a.shuffle.join(' ')"`
	./push_swap $ARGS | wc -l | tr '\n' ' '
	echo -n "| "
	./push_swap $ARGS | ./tester/checker_linux $ARGS
done
printf "\n"