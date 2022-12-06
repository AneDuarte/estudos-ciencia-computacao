program trocar_variaveis;
var num1, num2, extra: integer;

begin
    write('Digite o primeiro número: ');
    read(num1);
    
    write('Digite o segundo número: ');
    read(num2);
    
    extra:= num1;
    num1:= num2;
    num2:= extra;
    
    writeln(num1);
    writeln(num2);
end.

