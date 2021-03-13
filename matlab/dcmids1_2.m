clc;
n=randi([0 1],1,10);
a=5;
for i=1:length(n)
  if n(i)==1
    if mod(a,2)==0
      d(i)=-5;
    else
    d(i)=5;
    end
  a=a+1;
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
  i=i+1;
 end
end
plot(t,y,'r');
grid on;
xlabel('time');ylabel('amplitude');title('bipolar NRZ');
axis([0 length(n) -10 10]);