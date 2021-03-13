n=-10:1:10;
i=[zeros(1,10) ones(1,1) zeros(1,10)];
s=[zeros(1,10) ones(1,11)];

a=input('origin:'); 
i1=[zeros(1,10+a) ones(1,1) zeros(1,10-a)];
s1=[zeros(1,10+a) ones(1,11-a)]; 

subplot(2,2,1);
stem(n,i); 
xlabel('aime'); ylabel('amplitude');title('Unit Impulse'); 

subplot(2,2,2); 
stem(n,s);
xlabel('time');ylabel('amplitude');title('u(n)');

subplot(2,2,3); 
stem(n,i1);
xlabel('time'); ylabel('amplitude');title('Shifted unit Impulse');

subplot(2,2,6);
stem(n,s1);
xlabel('time');ylabel('amplitude');title('Shifted u(n)');