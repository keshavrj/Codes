clc;
t = 0:0.1:10;
y1 = ((t.^2)/2 -  (t/5));
subplot(3,1,1);
stem(t,y1,'b');
title("a.");

y2=exp(-2.*t);
subplot(3,1,2);
stem(t,y2,'m');
title("b.");


y3=y1.*y2;
subplot(3,1,3);
stem(t,y3,'k');
title("c.");