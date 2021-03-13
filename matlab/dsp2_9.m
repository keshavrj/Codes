n=-10:1:10;
x1=zeros(1,6);
n1=-4;
for i=1:7
    x2(i)=n1+2;
    n1+=1;
end
n1=3;
for j=1:8
    x3(j)=n1-2;
    n1+=1;
end
x=[x1 x2 x3];

subplot(2,1,1)
stem(n,x)
ylim([-5 10])
title('x(n)');xlabel('time');ylabel('Amplitude');

subplot(2,1,2)
stem(n-2,x)
title('y(n)');ylim([-5 10]);xlabel('time');ylabel('Amplitude')

