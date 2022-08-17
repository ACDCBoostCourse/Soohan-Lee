# Friend/Static/Const

## Friend
**사용하는 이유**: 클래스간의 멤버 변수를 공유해야 할 경우 쓰임. =>코드 확장 수월 but 캡슐화 파괴

**사용법**: 함수나 클래스 선언 앞에 선언
*ex) friend 함수
 friend void sayName (People p);*
 *ex) friend 클래스
 friend class PeopleB;*

## static 멤버 변수
■ 모든 객체가 공유하는 멤버 변수
■ 메모리는 프로그램 시작때부터 차지하고 있으며 메모리에 내내 값이 유지된다.

**선언**
*static int m_value; //선언, 메모리 차지X*
**정의**
*static Something::m_value=1; //정의, 메모리 할당*

**static 멤버 변수는 모든 객체들이 접근해야 하므로 프로그램 시작부터 끝까지 유지되어야 하니까 전역 범위에서만 초기화가 가능!!**

*=>클래스, main함수, 생성자 안에서 초기화 불가*

## const
**의미**: 이 함수는 멤버 변수의 값을 수정하지 않는다.

1. const int val: 수정 가능
2. const int * val: 포인터 값은 수정 가능 but, val이 가리키는 데이터 값은 수정 불가
3. int * const val: 포인터 값은 수정 불가 but, val이 가리키는 데이터 값은 수정 가능
4. const int * const val: 포인터 값, val 값 둘다 수정 불가


5. const int func ( int a) {}: 반환값은 수정 불가
6. int func (const int a) {}: 입력값 수정 불가
7. int func (int a) const {}: 함수 안에서 멤버 변수 값 수정 불가
