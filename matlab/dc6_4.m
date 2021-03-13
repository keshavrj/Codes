clc;clear all;
n=randi([0 1],1,6);
for i=1:length(n)
 if n(i)==1
  d(i)=1
 else
  d(i)=-1;
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

subplot(3,1,1);
plot(t,y,'r');
grid on;
axis([0 6 -2 2]);
xlabel('time');ylabel('Amplitude');title('polar NRZ');


z=sin(2*pi*8*t);
subplot(3,1,2)
plot(t,z);
grid on;
axis([0 6 -2 2]);
xlabel('time');ylabel('Amplitude');title('carrier signal');

x=z.*y;
subplot(3,1,3)
plot(t,x,'b');grid on;
axis([0 6 -2 2]);
xlabel('time');ylabel('Amplitude');title('bpsk signal');
