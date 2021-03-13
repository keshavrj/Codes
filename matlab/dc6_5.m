clc;
t=0:.001:1;
x=5.*sin(2*pi*50*t);
subplot(3,1,1)
plot(t,x,'r')
axis([0 1 -6 6])
grid on;
title('Carrier signal');xlabel('Time');ylabel('Amplitude');

u=square(2*pi*7*t, 50);
subplot(3,1,2)
plot(t,u)
axis([0 1 -2 2])
grid on;
title('Baseband signal');xlabel('Time');ylabel('Amplitude');

y=x.*u;
subplot(3,1,3)
plot(t,y,'m')
axis([0 1 -6 6])
grid on;
title('BPSK signal');xlabel('Time');ylabel('Amplitude');
