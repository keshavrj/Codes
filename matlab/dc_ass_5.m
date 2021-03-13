close all;
clc;
n=[1 0 1 0 1 0 1 1 0 1]
it=1;
for i=1:length(n)
  if n(i)==1
  d(i)=it;
  else
  d(i)=-it;
  end
end

i=1;
t=0:0.01:length(n);
for j=1:length(t)
  if t(j)<=i
    y(j)=d(i);
  else
    y(j)=d(i)
    i+=1;
  end
end
plot(t,y,'b');
axis([0 length(n) -2 2]);