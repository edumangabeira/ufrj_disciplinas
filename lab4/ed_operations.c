/*
Implementa conjunto de operacoes para os exercicios propostos em sala.
*/

//Compara o tempo entre duas realizacoes de uma mesma tarefa.
int compara_tempo(Tempo t1, Tempo t2){
	int r;
	int tempo_1 = t1.hora*3600 + t1.minuto*60 + t1.segundo;
	int tempo_2 = t2.hora*3600 + t2.minuto*60 + t2.segundo;
	if(tempo_1 < tempo_2){
		r = -1;

		}else if(tempo_1 == tempo_2){
			r = 0;

			}else{
				r = 1;
			}
	return r;
}
