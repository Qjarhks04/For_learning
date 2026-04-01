<%@ page language="java" contentType="text/html; charset=utf-8"
    pageEncoding="utf-8"%>
<!doctype html>
<html lang="ko">
<head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <title>JavaProject</title>
    <meta name="description" content="Prism is a beautiful Bootstrap 4 template for open-source landing pages."/>
    
    <link href="https://fonts.googleapis.com/css?family=K2D:300,400,500,700,800" rel="stylesheet">
    <link rel="stylesheet" href="css/bootstrap.css">
    <link rel = "icon" href =  
"https://cdn.iconscout.com/icon/premium/png-512-thumb/java-2752149-2284966.png?f=webp&w=512" 
        type = "image/x-icon"> 
    <link href='https://unpkg.com/boxicons@2.1.4/css/boxicons.min.css' rel='stylesheet'>
</head>
<body>

<section class="bg-gradient pt-5 pb-6">
    <div class="container">
        <div class="row">
            <div class="col-12 d-flex flex-row align-items-center justify-content-between">
                <div class="heading-brand">Welcome.java</div>
            </div>
        </div>
        <div class="row mt-6">
            <div class="col-md-8 mx-auto text-center">
                <h1>Java Web Project</h1>
                <p class="lead mb-5">이 사이트는 자바 프로젝트 결과물로 Front-end & Back-end를 구현하였고 html, css, jsp,
                java, js, sql등을 사용하여 만들었으며 기능구현은 자바로 만들었습니다. </p>
                <a href="home.jsp" class="btn btn-success svg-icon">
                    <em class="mr-2" style="font-size:20px;"><i class='bx bxl-java'></i></em>
                   Continue
                </a>
            </div>
        </div>
        <div class="row mt-5">
            <div class="col-md-9 mx-auto">
                <div class="code-window">
                    <div class="dots">
                        <div class="red"></div>
                        <div class="orange"></div>
                        <div class="green"></div>
                    </div>
                    <pre class="language-javascript line-numbers"><code class="language-javascript">package java0919;

public class AnonymousArray {
	public static void main(String[] args) {	
		System.out.println("NumbersSum"" : " + sum(new int[] {1, 2, 3, 4}));
	}	
	public static int sum(int[] numbers) {
		int total = 0;
		
		for(int i = 0; i < numbers.length; i++) {
			total += numbers[i];
		}
		return total;	
	}
}</code></pre>
                </div>
            </div>
        </div>
    </div>
</section>
<script src="https://code.jquery.com/jquery-3.2.1.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/feather-icons/4.7.3/feather.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.15.0/prism.min.js"></script>
<script src="https://cdnjs.cloudflare.com/ajax/libs/prism/1.15.0/plugins/line-numbers/prism-line-numbers.min.js"></script>
<script src="js/scripts.js"></script>
</body>
</html>
