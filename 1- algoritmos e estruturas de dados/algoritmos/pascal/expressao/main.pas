program expressao;
var
    a, b, c, d, e, f, x: real;

begin
    write('Digite a: ');
    read(a);
    write('Digite b: ');
    read(b);
    write('Digite c: ');
    read(c);
    write('Digite d: ');
    read(d);
    write('Digite e: ');
    read(e);
    write('Digite f: ');
    read(f);
    
    x:= ((a + b) / (c - d) * e) / (f / (a * b) + e);
    
    writeln(x);
end.