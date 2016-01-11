# 4차시 - 반복실행을 명령하는 반복문

## 반복문이란 무엇인가

반복문을 사용하지 않고 같은 내용을 여러 번 실행시키고 싶다면 같은 코드를 여러 번 입력해야 한다. 하지만 코드의 길이가 지나치게 길어지고 반복되는 내용이 많아지기 때문에 비효율적이다. 이 수고를 덜어주는 명령어가 바로 반복문이다.

## while문
구문:

    while(조건) { }

예시:

    int num = 0;
    while(num < 5) {
        num++;
    }
    
반복문 이후의 num 값은 5이다.

반복문의 조건을 따질 때는 0(False)를 제외한 정수를 참(True)으로 간주한다. 따라서 조건으로 0 이외의 값을 입력하면 무한루프가 된다. 하지만 break문을 이용하여 반복문에서 나올 수 있다.

> 윤성우의 열혈강의 p.148의 SimpleWhile.c 작성해보기

#### while문의 중첩
반복문을 반복. 구구단 출력을 생각하면 쉽다. (숙제)

## do ~ while문

	do {
	
	} while(조건)
	
기본적인 틀은 while문과 같다, 단 조건이 밑으로 내려와있어 반복하는 영역을 최소 한번은 실행하고 지나간다.

## for문

while 구문에서 횟수를 정하는 요소들을 전부 조건에 모아놓았다.

	for(int num= 0; num < 5; num++) // ;로 구분한다
	    printf(“HighWay To Hell”); // 한줄이므로 괄호 생략 가능

기본 사용법은 while과 동일. 대부분 반복 횟수가 정해진 경우에 사용한다. 조건식에 있는 요소들은 없어도 된다(다없으면 무한루프가 된다)

> 윤성우의 열혈강의 p.165의 AddToNum.c 작성해보기

# 조건에 따른 흐름의 분기 (조건문)

조건에 따라 실행하는 프로그램이 달라진다.

## if구문
구문:

    if(조건) { }

### if ~ else 구문
구문:

    if(조건) {
    	// 조건을 만족하는 경우 이곳을 실행
    } else { 
    	// 조건을 만족하지 않는 경우 이곳을 실행
    } 

    if(조건 1) {
    	// 조건 1을 만족하는 경우 이곳을 실행
    } else if(조건 2) { 
    	// 조건 2를 만족하지 않는 경우 이곳을 실행
    } else {
    	// 조건 1과 조건 2를 만족하지 않을 경우 이곳을 실행
    }

다음과 같이 if문을 사용해서

    if() {
    	
    }
    if() {
    	
    }
    
그럴경우 불필요한 연산을 하게 되거나 연산의 결과가 바뀌게 된다. 그런 현상을 막기 위해(혹은 YES or NO 선택) 사용한다. 이것도 if ~ else if ~ else if ~와 같이 중첩할수 있다(토너먼트를 생각하면 편하다)

> 윤성우의 열혈강의 p.185의 CalTwo.c 작성해보기

## 조건 연산자(삼항 연산자)
	int num3 = (num1 > num2) ? data1 : data2
(괄호)안의 조건이 참이면 왼쪽(data1), 거짓이면 오른쪽(data2)가 num3에 들어간다. ()if ~ else구문의 단순화)

## 반복문의 생략과 탈출
1. break
반복문 안에서 사용되며 사용시 가장 가까이에 있는 ‘반복문’(while, do ~ while, for, switch) ‘하나’를 빠져나온다

2. continue
반복문 안에서 사용되며 사용시 continue 구문 밑에 있는 모든 구문을 생략하고 다시 처음으로 가 조건을 검사한다.

> 윤성우의 열혈강의 p.188의 ThreeOperand.c 작성해보기

## switch 구문
	switch(num) {
	case 1: // num이 1일 경우
		printf(~~~);
		break; // 안적으면 밑에있는 case도 실행한다(일부러 안넣는 경우도 있다.)
	case 2: // num이 2일 경우
		break;
	default : // 모두 아닌 경우
		printf(~~~);
	}

if ~ else if ~ else ….과 비슷하다. 상황에 따라 if ~ else if ~ else와 switch 중에서 더 자연스러운 것을 골라 쓴다.

> 윤성우의 열혈강의 p.194의 EnglishSchool.c 작성해보기

## goto 구문
별로 쓰이지 않으므로 스킵

# 숙제
* 윤성우의 열혈강의 p.157의 [문제 1]
* 윤성우의 열혈강의 p.189의 [문제 1]과 [문제 2]