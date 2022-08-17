#  상속과 Protected

## private 상속
private으로 상속할 경우 모든 멤버들은 private으로 바꾸어 넘어오게 된다.

## protected 상속
protected로 상속할 경우 private은 그래도 private, protected는 그대로 protected,  그리고 public은 protected로 변경되어 상속된다.

## public 상속
무엇 하나 변하지 않고 멤버 그래도 상속

## 정리
접근제한자(*public, private, protected*)을 활용하여 상속을 받을때는 **범위가 좁은걸 최대한 지키려고 하는것 같다.**
그래서 제시된 접근제한자보다 범위가 좁은 것은 건들지 않고 범위가 넓은 것만 접근제한자만큼 범위를 줄인다.




