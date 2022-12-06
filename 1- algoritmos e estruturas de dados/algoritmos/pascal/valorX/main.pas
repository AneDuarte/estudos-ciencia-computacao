
program valorX;
var a, b, c, d, e, f, x: real;

begin
    write('Digite o valor de A: ');
    read(a);
    
    write('Digite o valor de B: ');
    read(b);
    
    write('Digite o valor de C: ');
    read(c);
    
    write('Digite o valor de D: ');
    read(d);
    
    write('Digite o valor de E: ');
    read(e);
    
    write('Digite o valor de F: ');
    read(f);
    
    x:= (((a+b)/(c-d))*e)/((f/(a*b))+e);
    
    write(x:0:2);
end.