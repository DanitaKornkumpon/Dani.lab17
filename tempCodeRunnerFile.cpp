void myString(char *&p, int length){
	p= new char[length + 1];    
	for(int i = 0; i < length;i++) p[i]= 'A'+i;
	p[length]= 0;
}