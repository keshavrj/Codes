clc;
clear all;
a=-3;
n=(a-10):1:(a+10);
step=[zeros(1,10) ones(1,11)]; 
stem(n,step);
xlabel('n'); ylabel('Amplitude');title('Shifted_step_signal');