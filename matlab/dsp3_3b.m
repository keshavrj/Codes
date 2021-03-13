clc;
s=50;
n=0:1:(s-1);
b=[1.2503 2.2368 2.5689];
a=[1];
x1=sin(2*pi*0.02*n);
y1=filter(b,a,x1);
n=input('Shift: ');
rhs=[zeros(1,n),y1];
x2=[zeros(1,n),x1];
lhs=filter(b,a,x2);

subplot(3,1,1);
stem(lhs);
subplot(3,1,2);
stem(rhs);
subplot(3,1,3);
stem(lhs-rhs);
title('linear shift invariance');