//Código de Alberto Rodríguez Pérez y Francisco Torres Alonso PB4, Contador Arbitrario
//para la sucesión 7 13 7(15) 9 6 12 2 8

module JK(output reg Q, output wire NQ, input wire J, input wire K,   input wire C);
  not(NQ,Q);

  initial
  begin
    Q=0;
  end    

  always @(negedge C)
    case ({J,K})
      2'b10: Q=1;
      2'b01: Q=0;
      2'b11: Q=~Q;
    endcase
endmodule

module contadorJKmedio (output wire[3:0] Q, output wire[3:0] nQ, input wire C);
  //Cables de entrada a los biestables.
  wire wa1, wa2, wo1;

  //Cables intermedios de una puerta a otra.
  wire wo2;

  //Puertas correspondientes al contador.
   or o1 (wo1, nQ[2], nQ[0]);
   or o2 (wo2,  Q[1], nQ[0]);
  and a1 (wa1,  Q[3], nQ[2]);
  and a2 (wa2,  Q[3], wo2);
  
  //El propio contador
  JK jk3 (Q[3], nQ[3], 1'b1,   wo1, C);
  JK jk2 (Q[2], nQ[2], Q[3],   wa2, C);
  JK jk1 (Q[1], nQ[1], 1'b1,  1'b1, C);
  JK jk0 (Q[0], nQ[0],  wa1, nQ[2], C);

endmodule

  //Módulo para cambiar el quince por el siete.
module contadorJK (output wire[3:0] Q, input wire C);
  wire a,b,c,d;
  contadorJKmedio aa({a,Q[2],Q[1],Q[0]},{b,c,Q[3],d},C);
endmodule

  //Sacar por pantalla la sucesión
module test;
  reg C;
  wire [3:0] Q;
  contadorJK counter (Q,C);

  always 
  begin
    #10 C=~C;
  end

  initial
  begin
    $dumpfile("salida.dmp");
    $dumpvars(2, counter, Q);
    $monitor("         Salida = %b (%d)", Q, Q);
          
    C=0;
    #500 $finish;
  end
endmodule

