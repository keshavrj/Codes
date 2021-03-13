clc;
a=1;
t=0:0.02:5;
dutycycle=input('Enter duty cycle: ');
y=a*square(2*pi*2*t,dutycycle);
subplot(3,1,1)
plot(t,y,'b');
grid on;
axis([0 5 -2 2])
xlabel('time');ylabel('amplitude');title('square wave baseband signal');
b=5;
z=b*sin(2*pi*6*t);
subplot(3,1,2)
plot(t,z,'r');
grid on;
axis([0 5 -6 6])
xlabel('time');ylabel('amplitude');title('Carrier signal');
x=y.*z;
subplot(3,1,3)
plot(t,x,'k');
grid on;
axis([0 5 -10 10])
xlabel('time');ylabel('amplitude');title('PSK signal');