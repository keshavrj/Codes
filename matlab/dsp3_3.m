clc;
s=50;
n=0:1:(s-1);
b=[0.5 -2 5];
a=[1]
x1=sin(2*pi*0.02*n);
x2=sin(2*pi*0.04*n);
y1=filter(b,a,x1);
y2=filter(b,a,x2);
a=2;b=3;
rhs=a*y1+b*y2;
x3=a*x1+b*x2;
lhs=filter(b,a,x3);

subplot(3,1,1);
stem(lhs);
subplot(3,1,2);
stem(rhs);
subplot(3,1,3);
stem(lhs-rhs)
ylim([-10 10]);