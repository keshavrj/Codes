clc;
c=3*1e8;
f=1e6;
x=0:0.1:250;
k=2*pi*f./c;
z1=1-j;
z2=-1+j;
y1=exp(-j*k*x)+z1*exp(j*k*x);
y2=exp(-j*k*x)+z2*exp(j*k*x);
subplot(2,1,1);
plot(x,y1)
xlabel("Length");ylabel("Voltage");title("RC= 1-j ")
subplot(2,1,2);
plot(x,y2)
xlabel("Length");ylabel("Voltage");title("RC= -1+j ")
