LEXICO
	S: Secuencia de Entero;
	contaDivi: Entero;
ALGORITMO
	Comenzar(S);
	SEGUN EA(S)
		EA(S) = MarcaFin: Escribir("vacia");
		EA(S) != MarcaFin Y NO EA(S) MOD 2:
			contaDivi <- 0;
			REPETIR
				SI EA(S) MOD 3 ENTONCES contaDivi <- ContaDivi + 1;
			HASTA EA(S) = MaraFin O EA(S) MOD 2;
			Escribir(contaDivi);
FIN
