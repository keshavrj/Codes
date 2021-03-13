clc;
n=randi([0 1],1,8)
f1=input('Enter min. frequency: ');
f2=input('Enter max. frequency: ');
for i=1:length(n)
  if n(i)==1
    d(i)=1;
  else
  d(i)=0;
  end
end

i=1;
t=0:0.01:length(n);
for j=1:length(t)
  if t(j)<=i
    y(j)=d(i);
  else
    y(j)=d(i);
  i+=1;
end
end
subplot(5,1,1);
plot(t,y,'k');
grid on;
axis([0 length(n) -2 2])
title('Unipolar NRZ signal');
y1=cos(2*pi*f1*t);
subplot(5,1,2);
plot(t,y1,'r');
grid on;
axis([0 length(n) -2 2])
title('Low frequency carrier');
y2=cos(2*pi*f2*t);
subplot(5,1,3);
plot(t,y2,'b');
grid on;
axis([0 length(n) -2 2])
ylabel('amplitude');
title('High frequency carrier');
for j=1:length(t)
if y(j)==0
z(j)=y1(j);
else
z(j)=y2(j);
end
end
subplot(5,1,4);
plot(t,z,'g');
grid on;
axis([0 length(n) -2 2])
title('BFSK Signal');
for j=1:length(t)
if z(j)==y1(j)
x(j)=0;
else
x(j)=1;
end
end
subplot(5,1,5);
plot(t,x,'r');
grid on;
axis([0 length(n) -2 2])
xlabel('time');title('Demodulated Signal');