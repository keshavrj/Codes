zl=100;
z0=10:10:200;
rf=(zl-z0)./(zl+z0);
subplot(2,1,1);
plot(z0,rf,'b')
xlabel('Impedence');ylabel('Ref. Coeff. magnitude');

phase = angle(rf);
subplot(2,1,2);
plot(z0,phase)
xlabel('Impedence');ylabel('Ref. Coeff. phase');