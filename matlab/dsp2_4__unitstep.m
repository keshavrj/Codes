clc;
clear all;

n= -9:1:10;
y1=[zeros(1,9) ones(1,11)];
y2=[zeros(1,2) ones(1,18) ];
y3= [zeros(1,18) ones(1,2)];

subplot(3,1,1);
stem(n,y1);
xlabel('time');ylabel('amp');title('unitstep');

subplot(3,1,2);
stem(n,y2);
xlabel('time');ylabel('amp');title('u(n+7)');

subplot(3,1,3);
stem(n,y3);
xlabel('time');ylabel('amp');title('u(n+9)');