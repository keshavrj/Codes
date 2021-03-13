clc;
n=0:1:59;
f=2/10;
a=input("Amplitude: ");
phase=input("Phase: ");
y=a*sin((2*pi*f*n) + phase);
plot(n,y);
stem(n,y);
xlabel('n');ylabel("amplitude");