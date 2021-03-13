clc;
n=0:1:79;
a=input("Amplitude: ")
c1= (1/14)+(pi/14)*i;
y1=a*exp(c1*n);
subplot(2,2,1)
stem(n,imag(y1))
subplot(2,2,2)
stem(n,real(y1))

c2=(1/20)+(pi/8)*i;
y2=a*exp(c2*n);
subplot(2,2,3)
stem(n,imag(y2))
subplot(2,2,4)
stem(n,real(y2))
