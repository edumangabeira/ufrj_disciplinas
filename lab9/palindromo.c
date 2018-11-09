int eh_palindromo(char *palavra, short int tam){
	if(tam == 1){
		return 1;
	}else{
		if((tam == 2) && (palavra[0] == palavra[1])){
			return 1;
		}else{
			return ((palavra[0] == palavra [tam-1]) && eh_palindromo(palavra+1, tam-2));
		}
	}
}