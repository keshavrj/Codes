a=-3;
n=(a-10):1:(a+10);
y=n>=a;
stem(n,y);
axis([-10 10 -1 2])
title("Unit step signal");xlabel("time");ylabel("Magnitude");