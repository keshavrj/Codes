n = -4:1:5; 
y = [-3-1831-189-17];
t = input('Entershiftingvalue:'); 
e = n + t;
subplot(3,1,1); 
stem(n,y);
xlabel('n'); ylabel('Amplitude');title('Original Signal');

subplot(3,1,2); 
stem(-n,y); 
xlabel('n');ylabel('Amplitude');title('Folded Signa1');

subplot(3,1,3); 
stem(e,y);
xlabel('e');ylabel('Amplitude');title('Shifted Signa1');
	
