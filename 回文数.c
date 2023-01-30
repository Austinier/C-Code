//循环取余转换为字符串判断
bool isPalindrome(int x){
    int IS=0;
    int i,j,n,length;
    int num[100];
    for(i=0;(x/10)!=0;i++) {
        n = x % 10;
        num[i] = n;
        x=x/10;
    }
    num[i]=x;
    length=i+1;
    j=length-1;
    for(i=0;i<length/2;i++) {
        {
            if (num[j--] == num[i])
                IS = 1;
            else {
                IS = 0;
                break;
            }
        }
    }
    if(IS==1)
        return true;
    else
        return false;
}
//执行用时8ms,内存消耗5.8MB，2023/01/30