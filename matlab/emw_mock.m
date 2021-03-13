z1=50;
bw=(1e6)*0.05;
freq= linspace(1e6-bw,1e6+bw,100);
fr=1e6;
w0=2*pi*1e6;
r=100;
c=fr/(bw*w0*r)
l=1/(((w0)^2)*c)
w=2*pi*freq;
lrec=i*w*l;
crec=1./(i*w*c);
y=(1/r)+1./crec+1./lrec;
z=1./y;
y=(z-z1)./(z+z1);
f1=0.5e6;
w1= 2*pi*f1;
z1=1/((1/r)+(1/i*w1*l)+(i*w1*c))
Xm= imag(z1);
Cs=1/(w1*abs(Xm));
Zf=(1./((1/r)+(1/i*w*l)+(i*w*c)))+(1./(i*w*Cs));
g=(Zf-z1)./(Zf+z1);
plot(freq,abs(y))
hold on;
plot(freq,abs(g))
xlabel('Frequency')
ylabel('Magnitude of reflection coefficient')