clc;
n=-2:0.01:2;
for i=1:length(n)
    y(i)=(-5/2)*n(i);
endfor
stem(n,y,'*');
axis([-5 5 -7 7]);