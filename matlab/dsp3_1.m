x=[];
a=1;
for j=1:5
  for i=0:5
    x=[x a*i];
  endfor
  a=-1;
  for i=5:-1:1;
    x=[x a*i];
  endfor
  a= 1;
endfor
stem(x);

