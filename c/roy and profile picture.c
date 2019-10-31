#include <stdio.h>
int main()
{
int l,h,n,w,i;
scanf("%d",&l);
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d %d",&h,&w);

if((l>h)||(l>w)){
printf("UPLOAD ANOTHER\n");
}
else if(h==w){
printf("ACCEPTED\n");
}

else if((l<h)||(l<w)){
printf("CROP IT\n"); n
}
}
return 0;
}
