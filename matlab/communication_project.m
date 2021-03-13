fprintf('1-> Finding the Frequency of tank circuit \n2-> Finding the capacitance of tank circuit \n');
fprintf('3-> Finding the inductance of tank circuit \n4-> Finding the value of series resistance in zener regulator \n');
i= input('Enter Your Choice: ')
if i==1
	printf("\nEnter the value of capacitance in micro farad:");
	c=input('');
	printf("\nEnter the value of inductance in micro henries:");
	l=input('');
	f=1/(2*3.14*sqrt(l*1e-6*c*1e-12))/(1e6);
	printf("\nFrequency of tank circuit is: %f mega hertz\n\n",f);
endif
if i==2
	printf("\nFinding the capacitance of tank circuit\n");
	printf("\nEnter the value of frequency in mega hertz:");
	f=input('');
	printf("\nEnter the value of inductance in micro henries:");
	l=input('');
	c=1/(4*3.14*3.14*l*1e-6*f*f);
	printf("\nCapacitance of tank circuit is: %f pico farad\n\n",c);
endif
if i==3
  fprintf("\nEnter the value of frequency in mega hertz: ");
  f= input('');
  fprintf("\nEnter the value of capacitance in micro farad:");
  c = input('');
	l=1/(4*3.14*3.14*c*1e-6*f*f);
	fprintf("\nInductance of tank circuit is: %f micro henry\n\n",l);
endif
if i==4
	printf("\nFinding the value of series resistance in zener regulator");
	printf("\nEnter the value of input voltage in volts:");
	vi= input('');
	printf("\nEnter the value of zener voltage in volts:");
	vz=input('');
	printf("\nEnter the value of total current i in milliampere:");
  i=input('');
	rs=(vi-vz)/i;
	printf("\nValue of series resistance is:%f kilo ohms",rs);
	ps=i*i*rs;
	printf("\n\nPower desipated across series resistance is: %f in mWatts",ps);
	iz=0.5/vz;
	printf("\n\nMaximum zener current is: %f in Ampere\n\n",iz);
endif
