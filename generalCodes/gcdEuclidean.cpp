// O(log(n)) ; n = min(x,y)
int gcd(int x, int y){
  while(y!=0){
    int temp=y;
    y=x%y;
    x=temp;
  }
  return x;
}
