// alert("me")
var a=100;
var b = 20;
var arr= [1,2,34,5,'ram'];
console.log(arr);
console.log('a+b = ', a+b);
console.log('a-b = ', a-b);
console.log('a*b = ', a*b);
console.log('a/b = ', a/b);
a++;
console.log('a= ', --a);

function avg(a,b)
{
    c=(a+b)/2;
    return c;
}
x=5
c1= avg(10,15);
console.log("c1= ",x);
// arr.forEach(function(elelment){
//     console.log(elelment);
// })
for(var i=0;i<arr.length;i++)
    console.log(arr[i]);
