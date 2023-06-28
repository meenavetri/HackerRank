int main() {
	
    int n, q ,r , ans=0;
    scanf("%d", &n);
    while(n>0)
    {
        q=n%10;
        n=n/10;
        ans=ans +q;
    }
    printf("%d",ans);
    return 0;
}
