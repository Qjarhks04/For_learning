# JavaScript 기초 개념 정리 및 예제 코드

제공된 요약 노트를 바탕으로 자바스크립트의 핵심 기초 개념과 각 주제별 예제 코드를 정리한 문서입니다.

---

## 1. 세미콜론 (;)
- 자바스크립트에서는 문장의 끝에 세미콜론(`;`)을 붙이지 않아도 엔진이 자동으로 세미콜론을 삽입(ASI, Automatic Semicolon Insertion)해 줍니다.
- 하지만 명확한 코드 작성과 예기치 못한 구문 오류 방지를 위해 세미콜론을 명시적으로 붙이는 것이 좋습니다.

```javascript
// 세미콜론 사용 권장
let greeting = 'Hello, World!';
console.log(greeting);
```

---

## 2. DOM 요소 접근과 값 변경 (`innerText` vs `value`)
- `document.getElementById('id')`를 사용하면 HTML 요소를 자바스크립트로 가져올 수 있습니다.
- `<input>`, `<textarea>` 등 입력 태그는 `.value` 속성을 사용하여 값을 읽거나 변경합니다.
- `<div>`, `<span>`, `<p>` 등 일반 태그는 `.innerText` 또는 `.textContent` 속성을 사용합니다.
- 참고: HTML 태그(예: `<div>`) 작성 시 닫는 태그를 생략해도 브라우저가 자동으로 닫아주지만, 명시적으로 닫는 것이 좋습니다.

```javascript
// DOM 요소 접근 예제
const outputDiv = document.getElementById('output');
const nameInput = document.getElementById('name');

// input의 입력값을 div의 텍스트로 반영
outputDiv.innerText = nameInput.value;
```

---

## 3. 문자열 표기법과 줄바꿈
- 문자열은 작은따옴표(`'`), 큰따옴표(`"`), 백틱(``` ` ```) 3가지로 감쌀 수 있습니다.
- 따옴표 내부에 동일한 종류의 따옴표가 들어가면 구문 에러가 발생하므로 서로 다른 따옴표를 쓰거나 백슬래시(`\'`, `\"`)로 이스케이프해야 합니다.
- 줄바꿈 문자는 `\n`을 사용하며, 백틱(템플릿 리터럴)을 사용하면 `\n` 없이 여러 줄 문자열 작성이 가능합니다.

```javascript
// 문자열 표현 예제
let single = '작은따옴표 안에 "큰따옴표" 포함';
let newLine = "첫 번째 줄\n두 번째 줄";
let template = `백틱 문자열
여러 줄을 자유롭게 작성할 수 있습니다.`;

console.log(newLine);
```

---

## 4. 진법 표현 및 숫자 변환 (`parseInt`, `parseFloat`, `Number`)
- **진법 표현**: 2진수(`0b`), 8진수(`0o`), 16진수(`0x`) 접두사를 사용해 숫자를 표현할 수 있습니다.
- **문자열 $\rightarrow$ 숫자 변환**:
  - `parseInt()`: 문자열을 정수로 변환 (`parseInt('3.14')` $\rightarrow$ `3`)
  - `parseFloat()`: 문자열을 실수(소수점)까지 변환 (`parseFloat('3.14')` $\rightarrow$ `3.14`)
  - `Number()`: 문자열 전체를 숫자로 변환 (숫자가 아닌 문자가 섞이면 `NaN`)
- `prompt()`는 사용자로부터 입력을 받는 팝업창을 띄우며, 입력받은 값은 기본적으로 **문자열** 형태입니다.

```javascript
// 진법 및 숫자 변환 예제
let hex = 0xff; // 16진수 255
let strNum = '3.14';

console.log(parseInt(strNum));   // 3
console.log(parseFloat(strNum)); // 3.14
console.log(Number('100'));      // 100
```

---

## 5. 이벤트 리스너와 자동 형변환 (Calculations)
- `addEventListener('click', callback)`을 사용해 버튼 클릭 등의 이벤트를 감지할 수 있습니다.
- `+` 연산자는 **문자열 연결** 기능도 겸하기 때문에 문자열 숫자 덧셈 시 `'10' + '20' = '1020'`이 됩니다.
- 뺄셈(`-`), 곱셈(`*`), 나눗셈(`/`) 연산자는 숫자 계산에만 사용되므로 문자열 숫자가 자동으로 **숫자 타입으로 자동 형변환**되어 계산됩니다.

```javascript
// 간단한 뺄셈 계산기 예제
const btn = document.getElementById('submit');

btn.addEventListener('click', () => {
  let num1 = document.getElementById('number1').value; // 예: "10"
  let num2 = document.getElementById('number2').value; // 예: "4"
  
  // '-' 연산자에 의해 num1과 num2가 숫자로 자동 형변환됨
  document.getElementById('result').value = num1 - num2; // 결과: 6
});
```

---

## 6. 비교 연산자 (`==` vs `===`)
- 동등 연산자(`==`): 피연산자들의 타입을 자동으로 변환한 후 **값만 비교**합니다.
- 일치 연산자(`===`): 타입 변환 없이 **값과 자료형(타입)이 모두 일치**하는지 엄격하게 비교합니다. (실무에서는 `===` 사용 권장)

```javascript
// 비교 연산자 비교
console.log(10 == '10');  // true (타입 변환 발생)
console.log(10 === '10'); // false (숫자 vs 문자열 타입 불일치)
```

---

## 7. 문자열 비교 시 주의할 점
- 문자열 비교는 사전순(유니코드 순서)으로 비교됩니다.
- `'a' < 'ab'`는 `'ab'`가 사전 뒤쪽에 나오므로 `true`입니다.
- **주의**: `"2" < "10"` 비교 시, 숫자가 아닌 **문자열 비교**이므로 맨 앞 글자인 `"2"`와 `"1"`을 먼저 비교합니다. 문자 `"2"`가 `"1"`보다 사전순으로 뒤에 있으므로 `"2" < "10"`은 `false`가 됩니다. (숫자 비교를 원하면 `Number()`나 `parseInt()`로 변환 후 비교해야 함)

```javascript
// 문자열 비교 주의 예제
console.log('a' < 'ab');     // true ('ab'가 사전 뒤쪽)
console.log("2" < "10");     // false (첫 글자 "2"와 "1" 비교 시 "2"가 더 큼)
console.log(Number("2") < Number("10")); // true (숫자로 변환 후 비교)
```

---

## 8. 논리 연산자와 단축 평가 (`&&`, `||`)
- **`&&` (AND) 단축 평가**: 첫 번째 값이 `true`이면 두 번째 값을 반환합니다.
- **`||` (OR) 단축 평가**: 첫 번째 값이 `false`이면 두 번째 값을 반환하고, 첫 번째 값이 `true`이면 첫 번째 값을 반환합니다.

```javascript
// 단축 평가 예제
console.log((100 > 5) && 'Hello'); // true && 'Hello' -> 'Hello'
console.log((100 < 5) || 'World'); // false || 'World' -> 'World'
```

---

## 9. `undefined`와 기본값 할당
- `undefined`는 변수를 선언만 하고 값을 할당하지 않았을 때 자동으로 가지는 빈 값 상태입니다.
- `undefined`는 조건문이나 논리 연산에서 `falsy`(거짓 같은 값)로 평가되므로, `||` 연산자를 활용하여 기본값(Default Value)을 지정할 수 있습니다.

```javascript
// ||를 활용한 기본값 지정
let a; // undefined (falsy)
let c = a || 100; // a가 falsy이므로 100이 할당됨

console.log(c); // 100
```

---

## 10. 제어문 (`if`, `switch`)
- `if`, `else if`, `else`문으로 조건에 따라 코드 실행 흐름을 제어합니다.
- `switch`문은 값에 따라 실행할 `case`를 나누며, 각 `case` 끝에 `break`를 작성하지 않으면 다음 `case` 문장까지 연속해서 실행되는 **fall-through** 현상이 발생합니다.

```javascript
// switch문 break 미작성 시 예제
let grade = 'A';

switch (grade) {
  case 'A':
    console.log('A 등급'); // break가 없어서 아래 case도 실행됨
  case 'B':
    console.log('B 등급');
    break;
  default:
    console.log('기타 등급');
}
```

---

## 11. 반복문 (`for`, `while`)
- `for`문: 반복 횟수가 명확할 때 주로 사용됩니다. (`for(초기식; 조건식; 증감식)`)
- `while`문: 조건이 참인 동안 반복해서 실행됩니다.

```javascript
// 0부터 30 미만까지 4씩 증가하며 합계 구하기

// 1) for문
let sumFor = 0;
for (let i = 0; i < 30; i += 4) {
  sumFor += i;
}
console.log('for문 결과:', sumFor); // 0+4+8+12+16+20+24+28 = 112

// 2) while문
let sumWhile = 0;
let j = 0;
while (j < 30) {
  sumWhile += j;
  j += 4;
}
console.log('while문 결과:', sumWhile); // 112
```

---

## 12. 배열 요소 추가 및 삭제 (`push`, `pop`)
- `pop()`: 배열의 **마지막 요소를 제거**하고 그 요소를 반환합니다. (원본 배열 변경)
- `push(값)`: 배열의 **마지막에 새 요소를 추가**합니다. (원본 배열 변경)

```javascript
const arr = [1, 2, 3, 4, 5];

arr.pop();         // 마지막 요소 5 제거
console.log(arr);  // [1, 2, 3, 4]

arr.push('a');     // 마지막에 'a' 추가
console.log(arr);  // [1, 2, 3, 4, 'a']
```

---

## 13. 배열 수정 및 추출 (`splice` vs `slice`)
- **`splice(시작인덱스, 삭제개수, [추가할값...])`**: 원본 배열을 **직접 수정**합니다.
- **`slice(시작인덱스, 끝인덱스)`**: 시작인덱스부터 (끝인덱스 - 1)까지의 요소를 **복사하여 새 배열로 반환**하며, 원본 배열은 변경되지 않습니다.

```javascript
// splice (원본 변경)
const arr1 = [1, 2, 3, 4, 5];
arr1.splice(2, 2, 'a', 'b'); // 인덱스 2부터 2개 삭제 후 'a', 'b' 삽입
console.log(arr1); // [1, 2, 'a', 'b', 5]

// slice (원본 유지)
const arr2 = [1, 2, 3, 4, 5, 6];
const sliced = arr2.slice(2, 5); // 인덱스 2~4 추출
console.log(sliced); // [3, 4, 5]
console.log(arr2);   // [1, 2, 3, 4, 5, 6] (원본 유지)
```

---

## 14. 배열 요소 검색 (`indexOf`, `lastIndexOf`)
- `indexOf(값)`: 배열에서 해당 값이 **처음 등장하는 인덱스**를 반환합니다. (없으면 `-1`)
- `lastIndexOf(값)`: 배열에서 해당 값이 **마지막으로 등장하는 인덱스**를 반환합니다.

```javascript
const arr = [1, 2, 3, 4, 5, 3];

console.log(arr.indexOf(3));     // 2 (앞에서부터 찾은 3의 위치)
console.log(arr.lastIndexOf(3)); // 5 (뒤에서부터 찾은 3의 위치)
```

---

## 15. 배열 병합 및 요소 교체 응용 (`concat`, `slice` 응용)
- `concat(값/배열)`: 기존 배열에 새로운 값이나 배열을 연결하여 **새로운 배열을 반환**합니다. (원본 유지)
- `slice()`와 `concat()`을 조합하면 배열의 특정 위치 값을 교체한 새 배열을 만들 수 있습니다.

```javascript
const target = ['가', '나', '다', '라', '마'];

// 인덱스 3 ('라') 위치를 '바'로 교체하는 응용
const copy = target.slice(0, 3).concat('바', target.slice(4));

console.log(copy);   // ['가', '나', '다', '바', '마']
console.log(target); // ['가', '나', '다', '라', '마'] (원본 유지)
```

---

## 16. 문자열과 배열 변환 (`join`, `split`)
- `join(구분자)`: 배열의 모든 요소를 구분자로 연결하여 **하나의 문자열**로 만듭니다.
- `split(구분자)`: 문자열을 구분자 기준으로 나누어 **배열**로 만듭니다.

```javascript
// join: 배열 -> 문자열
const arr = ['가', '나', '다', '라', '마'];
console.log(arr.join(',')); // "가,나,다,라,마"

// split: 문자열 -> 배열
const str = '수박, 참외, 사과, 복숭아';
console.log(str.split(', ')); // ['수박', '참외', '사과', '복숭아']
```

---

## 17. 중첩 배열 평탄화 (`flat`)
- `flat()`: 중첩된 배열을 지정한 깊이만큼 펼쳐서 단일 차원 배열로 만듭니다. (기본값: 1단계)

```javascript
const nestedArr = ['가', ['나', '다'], '라', ['마', ['바', '사']]];

console.log(nestedArr.flat()); 
// ['가', '나', '다', '라', '마', ['바', '사']] (1단계 평탄화)
```

---

## 18. 고정 크기 배열 생성 및 채우기 (`new Array`, `fill`)
- `new Array(크기)`: 지정한 크기의 빈 배열을 생성합니다.
- `fill(값)`: 배열의 모든 요소를 지정한 값으로 채웁니다.

```javascript
const arr = new Array(10);
arr.fill(0);

console.log(arr); // [0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
```

---

## 19. 중복 제거 (`Set`과 `Array.from`)
- `Set`: 중복되지 않는 유일한 값들의 집합 객체입니다.
- `new Set(배열)`로 중복을 제거한 뒤, `Array.from(Set)`을 통해 다시 일반 배열로 변환할 수 있습니다.

```javascript
const duplicates = ['가', '나', '다', '나'];

// 1) Set 객체로 중복 제거
const uniqueSet = new Set(duplicates);

// 2) 다시 배열로 변환
const uniqueArray = Array.from(uniqueSet);
console.log(uniqueArray); // ['가', '나', '다']
```

---

## 20. 학습 팁
- 시험에서는 코드 실행 결과 예측하기 혹은 빈칸에 알맞은 코드를 완성하는 문제가 나올 수 있으므로 주요 메서드의 동작과 인덱스 번호를 잘 확인해야 합니다.
