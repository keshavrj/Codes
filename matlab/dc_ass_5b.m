clc;
k=input('Enter the length: ');
n=randi([0 1],1,k);

for i=1:length(n)
    if n(i)==1
        d(i)=1;
    else
        d(i)=0;
    end
end
 
i=1;
t=0:.0001:length(n);
for j=1:length(t)
    if t(j)<=i
        y(j)=d(i);
    else
        y(j)=d(i);
        i=i+1;
    end
end
subplot(5,1,1)
plot(t,y,'r')
axis([0 k -1 2])
title('Baseband signal')
xlabel('Time')
ylabel('Amplitude')
f1=input('Enter the minimum frequency: ');
c1=cos(2*pi*f1*t);
subplot(5,1,2)
plot(t,c1,'r')
axis([0 k -1 2])
xlabel('Time')
ylabel('Amplitude')
f2=input('Enter the maximum frequency: ');
c2=cos(2*pi*f2*t);
subplot(5,1,3)
plot(t,c2,'r')
axis([0 k -1 2])
xlabel('Time')
ylabel('Amplitude')
for j=1:length(t)
    if y(j)==0
        z(j)=c1(j);
    else
        z(j)=c2(j);
    end
end
subplot(5,1,4)
plot(t,z,'r')
axis([0 k -1 2])
title(' BFSK signal')

xlabel('Time')
ylabel('Amplitude')
for j=1:length(t)
    if z(j)==c1(j)
        x(j)=0;
    else
        x(j)=1;
    end
end
x1=medfilt1(x);
subplot(5,1,5)
plot(t,x1,'r')
axis([0 k -1 2])
title('demodulated BFSK signal')
xlabel('Time')
ylabel('Amplitude')