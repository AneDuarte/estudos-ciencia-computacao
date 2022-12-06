program trocar_variaveis_melhor;
var num1, num2, soma: integer;

begin
    write('Digite o primeiro número: ');
    read(num1);
    
    write('Digite o segundo número: ');
    read(num2);
    
    soma:= num1 + num2;
    
    num1:= soma - num1;
    num2:= soma - num2;
    
    writeln(num1);
    writeln(num2);
end.

// x = 3
// y = 9

// x + soma - 2x
// x + x + y - 2x

// 3 + 12 - 6 = 9
//9 + 12 - 18 = 3

