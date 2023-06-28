int main()
{
	int num1, num2,add,sub;
    float num3 ,num4, add1 , sub1;
    scanf("%d %d",&num1,&num2);
    scanf("%f %f",&num3, &num4);
    add=num1+num2;
    sub=num1-num2;
    add1=num3+num4;
    sub1=num3-num4;
    printf("%d %d",add  , sub);
    printf("\n%.1f %.1f",add1 ,sub1);
    
    
    return 0;
}
