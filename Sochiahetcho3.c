#include<stdio.h>
#include<string.h>

int chiaHetChoBa(char *so){
	int dai = strlen(so);
	int tong = 0;
	
	for(int i=0; i<dai; i++){
		tong += so[i] - '0';
	}
	
	if(tong % 3 == 0){
		return 1;
	} else{
		return 0;
	}
}

int main(){
	int n;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		char so[501];
		scanf("%s", so);
		if(chiaHetChoBa(so)){
			printf("YES\n");
		} else{
			printf("NO\n");
		}
	}
	return 0;
}
