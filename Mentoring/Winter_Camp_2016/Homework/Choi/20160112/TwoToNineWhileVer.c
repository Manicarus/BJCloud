#include <stdio.h>
int main()
{
  int k;
  int l;
  
  
  /* while문의 중첩을 이용해서 푸는 문제입니다.
   * 
   * while() {
   *     while() {
   *     
   *     }
   * }
   * 
   * 위와 같은 형태로 프로그램을 작성해야 합니다.
   * 그리고 이 코드는 실행이 되지 않습니다.
   * 이클립스 에러 메세지를 읽어보고 잘못된 부분을 고치시기 바랍니다.
   * 
   * l이 초기화되지 않아서 오류가 나고 있습니다. l을 초기화하시기 바랍니다.
   */
   
  while(l<10} // '}'가 아니라 ')'가 되는 것이 맞을 것 같습니다. 
  {
    printf("%d * %d = %d \n", k, l, k * l);
    l++;
  }
  return 0;
}
    
