#include<stdio.h>
int solved (int ten , int price , int extra ){
    int mx ;
    if (price<=10){
            mx = 10 ;

    }
    else {
        mx = price ;
    }
    int mx2 ;
    int extraprice = 10 + extra ;
    if (extraprice>=price){
        mx2=extraprice ;
    }
    int ans1 , ans2 ;
    int i =0 ;
    for ( i = mx ;;i++){
        if (i%10 && i%price==0){
            ans1=i/price ;
            break ;
        }
    }
    for (i=mx;;i++)
    {
        if (i%10==0 && i%extraprice==0 && i%price==0)
        {
            ans2=i/price ;
            break ;
        }
    }
}
int main ()

{
    int k ,r ;
    scanf ("%d%d",&k,&r);
    int ans = solved (10,k,r);
    printf ("%d",ans);
    return 0 ;
}
