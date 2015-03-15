int f(int x, int y){
    if(x>y)
        return x;
    return y;
}

int f2(int x, int y, int z){
    return f(f(x,y),z);
}


int f3(int x, int y, int z, int w){
    return f(f(f(x,y),z),w);
}

int f4(int x, int y, int z, int w, int k){
    return f(f(f(f(x,y),z),w), k);
}

int teste(int x, int y){
    return x == y;
}

void todos_testes(){
    if(teste(f(x,y),2))
       printf("%s\n","OK");

    if(teste(f2(x,y,z),3))
       printf("%s\n","OK");

    if(teste(f3(x,y,z,w),4))
       printf("%s\n","OK");

    if(teste(f4(x,y, z,w,k),5))
       printf("%s\n","OK");

}

int main(){
    int x=1, y=2, z=3, w=4, k=5;

    printf("%d\n",f(x,y));
    printf("%d\n",f2(x,y,z));
    printf("%d\n",f3(x,y,z,w));
    printf("%d\n",f4(x,y, z,w,k));
    
    return 0;
}