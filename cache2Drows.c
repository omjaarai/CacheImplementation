//Author: Omjaa Rai
//CS login: omjaa
//wisc account: orai@wisc.edu
//This File: cache2Drows.c
//Files: cache1D.c, cache2Drows.c, cache2Dcols.c

int array[3000][500];

int main(){
	for(int row= 0; row<3000;row++){
		for(int col=0; col<500;col++){
			array[row][col]=row+col;
		}
	}
	return 0;
}
