clc;  
c = 3*1e8; 
Zmin = 60;  
Zmax = 200;  
f = 1e6; 
zl = Zmin+(Zmax-Zmin)*rand(1); 
lambda = c/f;  
x = 0:0.01:2*lambda;  
zo = 50;  
refc = (zl-zo)/(zl+zo);  
k = 2*pi*f/(3*1e8);  
Vp = 1;  
Vn = refc*Vp;  
V = Vp*exp(-i*k.*x)+Vn*exp(i*k.*x);  plot(x,V);  
title("voltage along the line"); 
xlabel("Length along the line"); 
ylabel("Amplitude of standing wave"); 
Vmax = abs(max(V));  
Vmin = abs(min(V));  
if Vmin==0  
Refc_calc = -1;  
else  
VSWR = Vmax/Vmin;  
Refc_calc = (VSWR-1)/(VSWR+1);  endif 
zl_calc = zo*(1+Refc_calc)/(1-Refc_calc);  
disp("Value of the unknown resistance: ");  
disp(zl_calculated);  
disp("Original Value was: ");  
disp(zl);