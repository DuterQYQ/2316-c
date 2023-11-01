//判断日期合理性，计算该日期是当年中的第几天
#include <stdio.h>
int isLeapYear(int year){
    if ((year%4==0&&year%100!=0)||year%400==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isVaildyear(){
    int year;
    scanf("%d",&year);
    if (year<=0)
    {
        printf("Please type a correct year!\n");
        isVaildyear(year);
    }
    else{
        return year;
    }
}
int isVaildmonth(){
    int month;
    scanf("%d",&month);
        if (month<1||month>12)
        {
            printf("Please type a correct month!\n");
            isVaildmonth(month);
        }
        else{
            return month;
        }
    }
int isVaildDay(int year,int month){
        int day;
        scanf("%d", &day);
        int MONTH[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if ((day <= MONTH[month]) || (isLeapYear(year) && month == 2 && day == 29))
        {
            return day;
        }
    else{
        printf("Please type a correct day!\n");
        isVaildDay(year,month);
    }
}
int dayNumbers(int year,int month,int day){
    int num = 0;
    int MONTH[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        MONTH[2] = 29;
    }
    for (int i = 1; i < month; i++)
    {
        num = num + MONTH[i];
    }
    num = num + day;
    return num;
}
int main(){
    int year,month,day;
    printf("Please type a year:\n");
    year=isVaildyear();
    printf("Please type a month:\n");
    month=isVaildmonth();
    printf("Please type a day:\n");
    day=isVaildDay(year, month);
    printf("It is the %d day.\n",dayNumbers(year,month,day));
    return 0;
}