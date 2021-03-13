clc;
s=input("shift: ");
n=0:1:19;
n1=0:1:(19+s);
x=sin(2*pi*0.02*n);
x1=[zeros(1,s) x];
ncoeff=[1.2 2.2368 6];
dcoeff=[1 -10 0.5];
y=filter(ncoeff,dcoeff,x);
y1=filter(ncoeff,dcoeff,x1);
z=[zeros(1,s) y];
ydiff=(y1-z);
subplot(3,1,1);
stem(n1,y1);
title("Shifting");
subplot(3,1,2);
stem(n1,z);
subplot(3,1,3);
stem(n1,ydiff);
axis([0, 20, -15 15])
#ylim([-10,10]);