// Problema de recorrido
// Esquema 3 al no poder tratar la secuencia como al resto y no tratar al primero como al resto
// La postcondicón es que el EA no sea la MarcaFin. El invariante
// 

// LEXICO
//		S, R: secuencia de entero;
//		suma: entero;
// ALGORITMO
//		Comenzar(S);
// SEGUN EA (S) 
	//		EA (S) = MarcaFin O Avanzar (S) = MarcaFin 
	//			Escribir("Secuencia vacia");
	//		EA (S) != MarcaFin
	//			REPETIR 
	//				suma <- EA (S) + Avanzar(S);
	//				Registrar(R, suma);
	//				Avanzar (S);
	//			HASTA EA (S) != MarcaFin
	//			MIENTRAS EA (R) != MarcaFin ENTONCES
	//				Escribir(EA (R)); Avanzar (R);
	//			FIN_MIENTRAS
	// FIN_SEGUN
	// FIN

